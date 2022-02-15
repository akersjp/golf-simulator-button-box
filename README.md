# Golf Simulator Button Control Box

This is an arduino sketch and 3D printable model for a box that can be used to control a golf simulator.  Inpsiration came from going to X-Golf and seeing how they let users control the view you see with a box on the ground and large buttons for ease of use.  Without this, users have to walk over the PC during their turn and modify their club, direction, etc..

# What does it do?

Sends keyboard commands from arcade buttons to a PC.  In my use case, we were using the Optishot arcade software.  


# Getting Started

## What you'll need

* 3D Printer
* Arcade buttons
* Arduino compatible microcontroller that supports Keyboard.h library.  Information can be found [here](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/).  In my case, I grabbed a Leonardo board.  Not all arduino microcontrollers support sending keyboard presses via USB.

## Wiring Diagram

todo

## The 3D Model

I was looking for an existing model online that I could remix to fix my needs.  I found adafruit had an "arcade button control box" that I used in my remix.  This was almost exactly what I wanted so I bought their buttons too.  Link to their project is [here](https://learn.adafruit.com/arcade-button-control-box/3d-printing).

# What's Next?

* The arcade box solves a big problem, but the buttons are still a tad too small to hit with a golf club easily.  I bought new bigger buttons, which will require a new box to be made.  Next up will be a new custom box with new arcade buttons to make it even easier to use.
* Debounce club up / down.  Right now it's too easy to double the presses and you skip your clubs on accident.

# Picture Gallery

## Inspiration came from X-Golf:
![Screenshot](images/img_7534.jpg)

## Current Setup:
![Screenshot](images/img_7728.jpg)