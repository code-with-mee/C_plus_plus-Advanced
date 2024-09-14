#include <iostream>
#include "Media.h"
#include "Audio.h"
#include "Mp3.h"

int main()
{
    Media media("media");

    Audio* audio = static_cast<Audio*>(&media);
    audio->Play();
    audio->PlayAudio();

    Mp3* mp3 = static_cast<Mp3*>(&media);
    mp3->Play();
    mp3->PlayAudio();
    mp3->PlayMp3();
    mp3->Display();

    Audio* audio2 = static_cast<Mp3*>(&media);
    audio2->Play();
    audio2->PlayAudio();
}