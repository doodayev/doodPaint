//#define SQUARE_SIZE		4
#define SQUARE_GAP		0
#define SQUARE_DELAY	0 // mS

I0 DrawPixel(I64 x, I64 y, CBGR24 color)
{
	text.fb_alias[x + y * GR_WIDTH] = color;
}
	I64 ColorCount=52; //Amount of Colors currently in the program
	I64 ColorArray[ColorCount]={0xFFA07A,0xFA8072,0xE9967A,0xF08080,0xCD5C5C,0xDC143C,0xB22222,0xFF0000,0x8B0000,
	0xFF7F50,0xFF6347,0xFF4500,0xFFD700,0xFFA500,0xFF8C00,
	0xFFFFE0,0xFFFACD,0xFFEFD5,0xFFE4B5,0xFFDAB9,0xEEE8AA,0xF0E68C,0xBDB76B,0xFFFF00,
	0x7CFC00,0x32CD32,0x00FF00,0x228B22,0x006400,0x00FF7F,0x98FB98,0x2E8B57,
	0xB0E0E6,0x87CEFA,0x87CEEB,0x00BFFF,0x1E90FF,0x6495ED,0x4682B4,0x4169E1,0x0000CD,
	0xC0C0C0,0x808080,0x800000,0x808000,0x00FFFF,0x008080,0x000080,0xFF00FF,0x800080,0xCD5C5C,0xF08080};
	

/*	Colorname:	Hex:	RGB:				Number in Array: 
	lightsalmon #FFA07A rgb(255,160,122)	0
	salmon 		#FA8072	rgb(250,128,114)	1
	darksalmon	#E9967A	rgb(233,150,122)	2
	lightcoral	#F08080	rgb(240,128,128)	3
	indianred	#CD5C5C	rgb(205,92,92)		4
	crimson		#DC143C	rgb(220,20,60)		5
	firebrick	#B22222	rgb(172,34,34)		6
	red			#FF0000	rgb(255,0,0)		7
	darkred		#8B0000	rgb(139,0,0)		8

	coral		#FF7F50	rgb(255,127,80)		9
	tomato		#FF6347	rgb(255,99,71)		10
	orangered	#FF4500 rgb(255,69,0)		11
	gold		#FFD700	rgb(255,215,0)		12
	orange		#FFA500	rgb(255,165,0)		13
	darkorange	#FF8C00	rgb(255,140,0)		14

	lightyellow	#FFFFE0	rgb(255,255,224)	15
	lemonchiff	#FFFACD	rgb(255,250,205)	16
	papayawhip	#FFEFD5	rgb(255,239,213)	17
	moccasin	#FFE4B5	rgb(255,228,181)	18
	peachpuff	#FFDAB9	rgb(255,218,185)	19
	palegolden	#EEE8AA	rgb(238,232,170)	20
	khaki		#F0E68C	rgb(240,230,140)	21
	darkkhaki	#BDB76B	rgb(189,183,107)	22
	yellow		#FFFF00	rgb(255,255,0)		23	

	lawngreen	#7CFC00	rgb(124,252,0)		24
	limegreen	#32CD32	rgb(50,205,50)		25
	lime		#00FF00	rgb(0,255,0)		26
	forestgreen	#228B22	rgb(34,139,34)		27
	darkgreen	#006400	rgb(0,100,0)		28
	springgreen	#00FF7F	rgb(0,255,127)		29	
	palegreen	#98FB98	rgb(152,251,152)	30
	seagreen	#2E8B57	rgb(46,139,87)		31

	powderblue	#B0E0E6	rgb(176,224,230)	32
	lightskyb	#87CEEB	rgb(135,206,250)	33
	skyblue		#87CEEB	rgb(135,206,235)	34
	deepsky		#00BFFF	rgb(0,191,255)		35
	dodgerb		#1E90FF	rgb(30,144,255)		36
	cornflowerb	#6495ED	rgb(100,149,237)	37
	steelblue	#4682B4	rgb(70,130,180)		38
	royalblue	#4169E1	rgb(65,105,225)		39
	mediumblue	#0000CD	rgb(0,0,205)		40	

	silver		#C0C0C0	rgb(192,192,192)	41
	gray		#808080	rgb(128,128,128)	42
	maroon		#800000	rgb(128,0,0)		43
	olive		#808000	rgb(128,128,0)		44
	aqua		#00FFFF	rgb(0,255,255)		45
	teal		#008080	rgb(0,128,128)		46
	navy		#000080	rgb(0,0,128)		47
	fuchsia		#FF00FF	rgb(255,0,255)		48
	purple		#800080	rgb(128,0,128)		49
	IRANIANred	#CD5C5C	rgb(205,92,92)		50
	lightcoral	#F08080	rgb(240,128,128)	51

	All the hex codes and colors I stole
	from that website geeksforgeeks
	Full link here:
	https://www.geeksforgeeks.org/html-hex-color-codes/	

*/

I0 Color32Demo()
{
	
	I64 	SQUARE_SIZE=4;
	I64		i, j,k, x, y;
	I64		a=GR_WIDTH-(GR_WIDTH*1/20);
	I64		b=GR_HEIGHT-(GR_HEIGHT*1/5);	//height of plus sign
	I64		c=GR_HEIGHT-(GR_HEIGHT*1/8);
	CBGR24	color=0xFFFFFF;	
	CBGR24	color2;
	CBGR24  white=0xFFFFFF;
	I64 	ColorSquare=30;
	I64		MinusSign=70; //size of minus sign
	I64		Height=60;	//Size of square being used for palette
	I64		XCords[ColorCount];
	"\nPress any key to exit demo.\n\n  ";
	Print("Width of screen is %d \n",GR_WIDTH);
	Print("Height of screen is %d \n", GR_HEIGHT);
	
	Sleep(500);
	for (i=0; i<ColorCount; i++)
	{
		
		color2=ColorArray[i];
		x=FloorI64(i*ColorSquare+ColorSquare,ColorSquare);
		y=FloorI64(GR_HEIGHT,Height);
		for(j=0; j<ColorSquare; j++)
		{
			for(k=0; k<ColorSquare; k++)
			{
				DrawPixel(x+j,y+k, color2);
				
			}
		}
		XCords[i]=x;
		Print("%d %d \n", XCords[i], y);
	}		
		Print("a and b is? %d, %d \n",a,b);

//	text.is_fb_busy=TRUE;
	while (!CharScan)
	{
		//x = FloorI64(RandU16 % (GR_WIDTH-500), SQUARE_SIZE + SQUARE_GAP);
		//y = FloorI64(RandU16 % (GR_WIDTH-500), SQUARE_SIZE + SQUARE_GAP);
		
		x=FloorI64(mouse.pos.x, SQUARE_SIZE);
		y=FloorI64(mouse.pos.y, SQUARE_SIZE);
		for (i = 0; i < SQUARE_SIZE; i++)
		{
			for (j = 0; j < SQUARE_SIZE; j++)
			{		
				if(mouse.lb==1)
				{
					text.is_fb_busy=TRUE;
					DrawPixel(x + i, y + j, color);
	
				}		
		
			}
		}
		text.is_fb_busy=FALSE;
		for (i=0; i<ColorCount; i++)
			{
		
				color2=ColorArray[i];
				x=FloorI64(i*ColorSquare+ColorSquare,ColorSquare);
				y=FloorI64(GR_HEIGHT,Height);
				for(j=0; j<ColorSquare; j++)
				{
					for(k=0; k<ColorSquare; k++)
					{
						DrawPixel(x+j,y+k, color2);
					
					}
				}
				XCords[i]=x;
					//	Print("%d %d \n", XCords[i], y);
			}				
		Sleep(SQUARE_DELAY);
		
		
		
		for (j=0; j<MinusSign; j++)
		{
			for(k=0; k<ColorSquare; k++)
			{
				DrawPixel(a+j,b+k,white);
			}
		}
		for (j=0; j<ColorSquare; j++)
		{
			for(k=0; k<MinusSign; k++)
			{
				DrawPixel(a+MinusSign*.3+j,b+k-MinusSign*.25,white);
			}
		}

		for (j=0; j<MinusSign; j++)
		{
			for(k=0; k<ColorSquare; k++)
			{
				DrawPixel(a+j,c+k,white);
			}
		}	
		if(mouse.pos.x>a && mouse.pos.x<(a+MinusSign) && mouse.pos.y>b && mouse.pos.y<(c-20) && mouse.lb==1)
		{
			//	SQUARE_SIZE=SQUARE_SIZE+4;
		
			SQUARE_SIZE=SQUARE_SIZE+1;
				Print("Increased size to %d! \n",SQUARE_SIZE);
			Sleep(300);		 		
		}
		if(mouse.pos.x>a && mouse.pos.x<(a+MinusSign) && mouse.pos.y>c && mouse.pos.y<(c+ColorSquare) && mouse.lb==1)
		{
			SQUARE_SIZE=SQUARE_SIZE-1;
				Print("Decreased size to %d! \n",SQUARE_SIZE);
			Sleep(300);
		}
		

		for(i=0; i< ColorCount; i++)
		{
			if(mouse.pos.x<(XCords[i]+ColorSquare) && mouse.pos.x>(XCords[i]) && mouse.pos.y>(GR_HEIGHT-Height) && mouse.lb==1)
			{
				color=ColorArray[i];
			}
		}
		Sleep(SQUARE_DELAY);	
	}
//	text.is_fb_busy = FALSE;
	LFBFlush;

}

Color32Demo;