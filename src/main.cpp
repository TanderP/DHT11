#include <Arduino.h>

#include <DHTesp.h>

#define DHT_PIN 18
#define DHT_TYPE DHTesp::DHT11

DHTesp dht;

float temperature, humidity;

void setup() {
  Serial.begin(115200);
  
  dht.setup(DHT_PIN, DHT_TYPE);
  Serial.println("ESP START");
}

void loop() {
  temperature = dht.getTemperature();
  humidity = dht.getHumidity();


  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  delay(1000);

}
