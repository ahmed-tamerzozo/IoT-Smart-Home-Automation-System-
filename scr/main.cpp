#include <WiFi.h>
#include <PubSubClient.h>

// WiFi & MQTT Credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";
const char* mqtt_server = "broker.hivemq.com";

WiFiClient espClient;
PubSubClient client(espClient);

#define RELAY_PIN 18
#define SENSOR_PIN 34

void callback(char* topic, byte* payload, unsigned int length) {
    String message;
    for (int i = 0; i < length; i++) {
        message += (char)payload[i];
    }
    if (message == "ON") {
        digitalWrite(RELAY_PIN, HIGH);
    } else if (message == "OFF") {
        digitalWrite(RELAY_PIN, LOW);
    }
}

void setup() {
    Serial.begin(115200);
    pinMode(RELAY_PIN, OUTPUT);
    
    WiFi.begin(ssid, password);
    client.setServer(mqtt_server, 1883);
    client.setCallback(callback);
}

void loop() {
    if (!client.connected()) {
        // Reconnect logic
    }
    client.loop();

    int sensorVal = analogRead(SENSOR_PIN);
    client.publish("home/sensors/data", String(sensorVal).c_str());
    delay(5000);
}
