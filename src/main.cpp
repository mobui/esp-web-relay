/*
 * main.cpp
 *
 *  Created on: 11 окт. 2016 г.
 *      Author: Chebotarev_SA
 */
#include <Arduino.h>
#include <FS.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <pins_arduino.h>

#include "config.h"

ESP8266WebServer* server = new ESP8266WebServer(WS_PORT);

//ESP8266WebServer server(WS_PORT);

void handleGetAPConfig( ){

}

void handleSetAPConfig( ){

}

void setup(){

	server->begin();
	server->on("/api/v1/wifi/ap", HTTP_GET, handleGetAPConfig);
	server->on("/api/v1/wifi/ap", HTTP_POST, handleSetAPConfig);
}

void loop(){
	server->handleClient();
}



