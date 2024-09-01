#include <iostream>
#include "TVRemoteController.h"

using namespace std;

int main()
{
    TVRemoteController tv;
    tv.TurnOn();
    tv.VolumeUp();
    tv.VolumeUp();
    tv.VolumeUp();
    tv.VolumeUp();
    tv.VolumeUp();

    tv.ChannelUp();
    tv.ChannelUp();
    tv.ChannelUp();

    tv.TurnOff();
}
