#include "Volume.h"

Volume::Volume(int volume)
{
	this->volume = volume;
}

void Volume::VolumeUp()
{
	volume++;
	if (volume > 100)
		volume = 0;
	cout << "volume up : " << volume << endl;
}

void Volume::VolumeDown()
{
	volume--;
	if (volume < 0)
		volume = 100;
	cout << "volume down : " << volume << endl;
}
