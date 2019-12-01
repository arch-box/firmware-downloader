#ifndef _UTIL_H_
#define _UTIL_H_

#define ROOT                    "/"
#define OFW_PATH                "/OFW/"
#define APP_PATH                "/switch/firmware-downloader/"
#define APP_OUTPUT              "/switch/firmware-downloader/firmware-downloader.nro"
#define OLD_APP_PATH            "/switch/firmware-downloader.nro"
#define DL_OUTPUT               "/switch/firmware-downloader/OFWlatest.zip"
#define TEMP_FILE               "/switch/firmware-downloader/temp"

#define YES                     10
#define NO                      20
#define ON                      1
#define OFF                     0

int downloadFirmware(char *url, char *output, int mode);                  // download firmware
// void update_app();                                                      // update the app

#endif
