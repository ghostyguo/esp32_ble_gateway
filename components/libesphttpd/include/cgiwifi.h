#ifndef CGIWIFI_H
#define CGIWIFI_H

#include "platform.h"
#include "httpd.h"

int cgiWiFiScan(HttpdConnData *connData);
int tplWlan(HttpdConnData *connData, char *token, void **arg);
int cgiWiFi(HttpdConnData *connData);
int cgiWiFiConnect(HttpdConnData *connData);
int cgiWiFiSetMode(HttpdConnData *connData);
int cgiWiFiConnStatus(HttpdConnData *connData);
void wifiScanDoneCb(void);

#endif
