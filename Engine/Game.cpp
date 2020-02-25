/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
    if (wnd.kbd.KeyIsPressed(VK_RIGHT)) // Top Left Hand Corner is controlled by the keyboard.
    {
        x0++;
        
    }
    if (wnd.kbd.KeyIsPressed(VK_LEFT))
    {
        x0--;
    }
    if (wnd.kbd.KeyIsPressed(VK_UP))
    {
        y0--;
    }
    if (wnd.kbd.KeyIsPressed(VK_DOWN))
    {
        y0++;
    }

    if (wnd.mouse.LeftIsPressed())// Lower Right Hand Corner is controlled by the mouse.
    {
        x1 = wnd.mouse.GetPosX();
    }
    if (wnd.mouse.LeftIsPressed())
    {
        y1 = wnd.mouse.GetPosY();
    }
    



}

void Game::ComposeFrame()
{
    /*int x = 100;
        while(x < 600)
        {
            gfx.PutPixel(x, 100, 255, 255, 255);
            x++;
        }
    */
    /*Color c;
    c.SetR(255);
    c.SetG(255);
    c.SetB(0);*/

    /*Color c(255, 255, 0);//Constructor
    gfx.DrawRect(xPos, yPos, xPos + width, yPos + height, c);
    */
    gfx.DrawRect(x0, y0, x1, y1, Colors::Magenta);

    /*int v = 69;
    int& r = v;
    r += 420;
    v -= 69;*/
}
