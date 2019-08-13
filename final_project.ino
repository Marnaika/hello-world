#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
 
//const char* ssid = " ";
//const char* password = "";
int a=2,b=4,c=5;
 
void setup () {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print("Connecting..");
  }

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
}
void loop() {
 
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin("http://nabanita-sarkar.000webhostapp.com/final.php?read=1");
    int httpCode = http.GET();
    String response = "";
 
    if (httpCode > 0) {
      // start of fetching get process
      response = http.getString();
      Serial.println(response);

       if(response=="1"){
        digitalWrite(a,1);
        digitalWrite(b,0);
        digitalWrite(c,0);
        }
       else if(response=="2") {
        digitalWrite(b,1);
        digitalWrite(a,0);
        digitalWrite(c,0);
        }
       else if(response=="3"){
        digitalWrite(c,1);
        digitalWrite(a,0);
        digitalWrite(b,0);
        }
    }
 /*   else
      Serial.println(httpCode);*/



   // HTTPClient http;
    String api="http://nabanita-sarkar.000webhostapp.com/final2.php?state2=";

   int a=analogRead(A0);

    api=api+String(a,DEC);
    
    http.begin(api);
    Serial.println(api);
    
    int httpCode2 = http.GET();
    String response2 = "";
 
    if (httpCode2 > 0) {
      // start of fetching get process
      response2 = http.getString();
      Serial.println(response2);
    }
    else
      Serial.println(httpCode2);
      
    http.end();
    // end of fetching get process
        

    delay(1000);
  }
}
