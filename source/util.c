#include <stdio.h>
#include <string.h>
#include <switch.h>
#include <dirent.h>
#include "util.h"
#include "menu.h"
#include "unzip.h"
#include "download.h"

#define TEMP_FILE               "/switch/firmware-downloader/temp"

int downloadFirmware(char *url, char *output, int mode)
{
    if (!downloadFile(url, TEMP_FILE))
    {
      // check if directory exists
      DIR *dir = opendir(OFW_PATH);
      if (dir) closedir(dir);
      else
      {
          mkdir(OFW_PATH, 0777);
      }
        unzip(TEMP_FILE, mode);
        popUpBox(fntSmall,400, 250, SDL_GetColour(white), "Download complete!");
		drawText(fntSmall,400, 350, SDL_GetColour(white), "Install with ChoiDojourNX.");
		drawText(fntSmall,400, 450, SDL_GetColour(white), "Firmware files are in sd:/OFW/");
		updateRenderer();

		sleep(5);
    }
    return 1;
}

/*
void update_app()
{
    // download new nro as a tempfile.
    if (!downloadFile(APP_URL, TEMP_FILE))
    {
        // remove current nro file.
        remove(APP_OUTPUT);
        // remove nro from /switch/.
        remove(OLD_APP_PATH);
        // rename the downloaded temp_file with the correct nro name.
        rename(TEMP_FILE, APP_OUTPUT);
        // using errorBox as a message window on this occasion.
        errorBox(400, 250, "      Update complete!\nRestart app to take effect.");
    }

}
*/
