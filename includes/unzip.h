#ifndef _UNZIP_H_
#define _UNZIP_H_

#define UP_LATEST        0
#define UP_STABLE        1

// #define UP_APP              3
int mkpath(char* dir, mode_t mode);
int unzip(const char *output, int mode);

#endif
