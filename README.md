# Pinball
![pinball](https://github.com/ShridharBagal/Pinball/blob/master/Images%20and%20videos/Images/pinball.jpeg.jpg)
---
##  Abstract 
 Pinball is a type of arcade game, in which points are scored by a player manipulating one or more steel balls on a play field inside a cabinet called a pinball table (or "pinball machine"). The primary objective of the game is to score as many points as possible. 
##  Motivation
 The motivation for this project is the classic pinball video game developed by Cinematronics and published by Maxis in 1995 .It was a attempt to made a real life  working model of the same. 
##  Mechanical Aspect of the Design
 The Basic mechanical parts of a pinball machine consists of flippers ,bumpers ,plunger ,deflectors and slingshots.The cabinet is made up of wooden plyboard inclined at about 10 degrees. Plunger is a spring-loaded shaft with a nut at its tip. Bumper is a frustum of cone with a cylinderical hole with radius equal to the truncated base . Also there is a rod fitted across the hole along the plane of base of bumper.Then DC linear actuators are attached to this rod and fixed below the board. The curved surface of bumper is covered with aluminium foil and a cutout of a annular aluminium foil is pasted right below it.This assembly works like a switch. 
  Flipper is a trapazoid with a axle attached to its end around with it can rotate freely and the axle is fitted on a ball bearing for smooth rotation .Flippers are powered by a pneumatic actuator in combination of a solenoid valve.Deflectors consist of a wooden fan fitted on a DC motor .
  Slingshots are made up of wide rubber band wound around three pegs put on the board in triangular shape.A steel ball of 30mm diameter is used as a pinball.
##  Electronics Aspect of the Design
 The DC motors used in the deflectors are directly connected to the DC source so that they can rotate all the time .The linear actuator is given a up and down motion using a two relay ciruit .NO pins of both relays is shorted and connected to ground terminal and the NC pins are connected to positive terminal in a similar manner. The main pin of relays is connected to the linear actuator .The coil pins are connected to a ULN2003N chip which helps to energize the coil with 12V by taking a 5V signal from a arduino  MEGA microcontroller.The aluminium foil on the bumper is connected to input pin on a arduino MEGA board and the foil pasted below the bumper is connected to the ground .When the steel ball hits the bumper the circuit gets completed and a signal is received by the arduino .Using this signal we can make the linear actuator retract downwards in such a way that the ball is propelled away from the bumper .The score is calculated by counting the number of hits on the bumper. 
##  Cost Structure
 The total cost of the project was 6600 INR excluding the cost of 3D printing.
 
 |  Expense       | Cost    | 
 | -------------- |:-------:|
 | Electronics    |  1600   |
 | Mechanical     |  3200   |
 | Aesthetics     |  1800   |
##  Application 
 For entertainment purposes 
##  Limitations
 The pneumatic actuator gives a huge amount of force with can lead to fatigue failure over a period of time. So the flippers had to be controlled manually.
##  Future Improvements
 A lot of improvements can be made in scoring part of the game so that it becomes more challenging and fun to play.
##  Team members
1 Bhaskar Garg
2 SDL Malavika
3 Shashi Muchkund
4 Shridhar Bagal
6 Suteekshn Mahajan
##  Mentors 
1 Aayush Singh Chauhan
2 Pranjal Mishra
![pinballteam](https://github.com/ShridharBagal/Pinball/blob/master/Images%20and%20videos/Images/IMG-20190309-WA0003.jpg)
