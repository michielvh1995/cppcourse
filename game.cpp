#include "precomp.h" // include (only) this in every .cpp file
#include <iostream>
#include <vector>

// -----------------------------------------------------------
// Initialize the application
// -----------------------------------------------------------
void Game::Init()
{
}

// -----------------------------------------------------------
// Close down application
// -----------------------------------------------------------
void Game::Shutdown()
{

}

static Sprite rotatingGun( new Surface( "assets/aagun.tga" ), 36 );
static int frame = 0;
static int xlocation = 0;

// -----------------------------------------------------------
// Main application tick function
// -----------------------------------------------------------
void Game::Tick( float deltaTime )
{
    std::cout << deltaTime << std::endl;
    screen->Clear(80);
    xlocation += 10;
    if (xlocation >= SCRWIDTH) xlocation = 0;
    rotatingGun.SetFrame(frame);
    rotatingGun.Draw(screen,  xlocation, 5);

    frame++;
    if (frame >= 36) frame = 0;

}