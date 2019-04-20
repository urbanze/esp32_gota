#ifndef tcp_H
#define tcp_H

#include <Arduino.h>
#include <WiFi.h>
#include <WiFiServer.h>
#include <WiFiClient.h>
#include <esp_err.h>
#include <esp_log.h>
#include <mbedtls/sha256.h>
#include <mbedtls/aes.h>
#include <esp_ota_ops.h>
#include <soc/rtc_wdt.h>
#include <soc/rtc.h>
#include <esp_task_wdt.h>
#include <esp_partition.h>


class OTA_TCP
{
	private:
			static int8_t _crypted, _exc;
			static uint8_t _key[16];

			static void t_ota_tcp(void*z);


			
	public:	void init();
			void init(const char key[]);

};


#endif
