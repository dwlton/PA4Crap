/*
[Comments]																										[Comments]
[Comments]																										[Comments]
[Comments]                              Color Index File(ChromaticOrb.c)										[Comments]
[Comments]																										[Comments]
[Comments]                                   1st - level evocation												[Comments]
[Comments]								   Programmer: Dalton Lubash											[Comments]
[Comments]																										[Comments]
[Comments]                  Casting Time : 1 action																[Comments]
[Comments]                  Range : 90 feet																		[Comments]
[Comments]                  Components : V, S, M(a diamond worth at least 50 gp)								[Comments]
[Comments]                  Duration : Instantaneous															[Comments]
[Comments]																										[Comments]
[Comments]		You hurl a 4-inch diameter sphere of energy at a creature that you can see within range.    	[Comments]
[Comments]		You choose acid, cold, fire, lightning, poison, or thunder for the type of orb you create,		[Comments]
[Comments]		and then make a ranged spell attack against the target. If the attack hits, the creature		[Comments]
[Comments]	    takes 3d8 damage of the type you chose.															[Comments]
[Comments]																										[Comments]
[Comments]																										[Comments]
*/

#ifndef CHROMATIC_ORB_H
#define CHROMATIC_ORB_H

//text colors for additinal information
#define CO_PHYS      "\x1b[5m"  //flashing grey
#define CO_ACID      "\x1b[32m" //Green
#define CO_COLD      "\x1b[34m" //Blue
#define CO_FIRE      "\x1b[31m" //Red
#define CO_LIGHTNING "\x1b[33m" //Yellow
#define CO_POISON    "\x1b[35m" //Magenta
#define CO_THUNDER   "\x1b[36m" //Cyan
#define CO_NULL      "\x1b[0m"  //Reset

//'orb' colors
#define CO_BLACK   "\x1b[40m" // black pixel
#define CO_RED     "\x1b[41m" // red pixel
#define CO_GREEN   "\x1b[42m" // green pixel
#define CO_YELLOW  "\x1b[43m" // yellow pixel
#define CO_BLUE    "\x1b[44m" // blue pixel
#define CO_MAGENTA "\x1b[45m" // magenta pixel
#define CO_CYAN    "\x1b[46m" // cyan pixel
#define CO_WHITE   "\x1b[47m" // white pixel

#endif