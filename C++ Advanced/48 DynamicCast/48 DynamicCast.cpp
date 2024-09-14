#include <iostream>
#include "Media.h"
#include "Audio.h"
#include "Mp3.h"

using namespace std;

void CastMedia(Media* media)
{
    if (Mp3* mp3 = dynamic_cast<Mp3*>(media))
    {
        mp3->PlayMp3();
    }
    else if (Audio* audio = dynamic_cast<Audio*>(media))
    {
        audio->PlayAudio();
    }
    else if (Media* m = dynamic_cast<Media*>(media))
    {
        m->Play();
    }
}   

int main()
{
    Media* media = new Media();
    Audio* audio = new Audio();
    Mp3* mp3 = new Mp3();

    Media media2;

    CastMedia(media);
    CastMedia(audio);
    CastMedia(mp3);
}
