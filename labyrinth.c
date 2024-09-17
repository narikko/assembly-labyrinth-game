// Define Mazes
int mazes[9][9][12] = {
	{	// First Obstacle Course
		{2,1,0,1,1,1,0,0,0,1,0,1},
		{0,1,0,1,1,1,0,0,0,1,0,1},
		{0,1,0,0,0,0,0,0,0,1,0,1},
		{0,1,0,1,1,1,0,0,0,1,1,1},
		{0,1,0,1,1,1,0,0,0,1,1,1},
		{0,0,0,1,1,1,0,0,0,1,1,1},
		{1,1,1,1,1,1,0,0,1,0,0,0},
		{1,1,1,1,1,1,0,1,0,0,0,0},
		{1,1,1,1,1,1,0,0,0,0,0,3}
	},
	{	// Second Obstacle Course
		{2,1,0,1,1,1,0,0,0,0,0,1},
		{0,1,0,1,1,1,0,0,0,1,0,1},
		{0,1,0,0,0,0,0,0,0,1,0,1},
		{0,1,0,1,1,1,0,0,0,1,0,1},
		{0,1,0,1,1,1,0,0,0,1,0,1},
		{0,0,0,1,1,1,0,0,0,1,0,1},
		{1,1,1,1,1,1,0,0,1,0,0,0},
		{1,1,1,1,1,1,0,1,0,0,0,0},
		{1,1,1,1,1,1,1,0,0,0,0,3}
	},
	{	// Third Obstacle Course
		{2,0,0,0,0,1,0,0,0,1,0,1},
		{0,1,1,1,0,1,1,1,0,1,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,1},
		{0,1,1,1,1,1,0,1,1,1,0,1},
		{0,1,0,0,0,0,0,0,0,1,0,1},
		{1,1,0,1,1,1,1,1,1,1,1,1},
		{0,1,0,0,0,0,0,0,0,0,0,1},
		{0,1,1,1,0,1,1,1,1,1,0,1},
		{0,0,0,0,0,0,0,1,0,0,0,3}
	},
	{	// Fourth Obstacle Course
		{2,1,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,1,1,1,0,1,1,1,0,1},
		{0,1,0,0,0,1,0,1,0,1,0,1},
		{0,1,0,1,0,1,1,1,0,1,0,1},
		{0,0,0,1,0,0,0,0,0,1,0,1},
		{0,1,0,1,1,1,1,1,1,1,0,1},
		{0,1,0,1,0,0,0,1,0,0,0,1},
		{0,1,0,1,1,1,0,1,0,1,1,1},
		{0,1,0,1,0,0,0,0,0,0,0,3}
	},
	{	// Fifth Obstacle Course
		{2,0,0,0,0,1,0,1,0,1,0,1},
		{1,1,0,1,1,1,0,1,0,1,0,1},
		{0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,1,1,0,1,1,1,1,1,0,1},
		{0,0,0,1,0,1,0,1,0,0,0,1},
		{1,1,0,1,1,1,0,1,1,1,0,1},
		{0,0,0,1,0,1,0,0,0,0,0,1},
		{0,1,0,1,0,1,0,1,0,1,1,1},
		{0,1,0,0,0,1,0,1,0,0,0,3}
	},
	{	// Sixth Obstacle Course
		{2,0,0,0,0,0,0,1,0,0,0,1},
		{1,1,0,1,0,1,0,1,0,1,0,1},
		{0,0,0,1,0,1,0,0,0,1,0,1},
		{1,1,1,1,0,1,1,1,1,1,1,1},
		{0,0,0,1,0,0,0,1,0,0,0,1},
		{0,1,1,1,0,1,1,1,0,1,0,1},
		{0,1,0,0,0,0,0,0,0,1,0,1},
		{0,1,0,1,1,1,1,1,1,1,0,1},
		{0,0,0,0,0,0,0,0,0,1,0,3}
	},
	{	// Seventh Obstacle Course
		{2,0,0,0,0,0,0,0,1,0,1,0},
		{1,1,1,0,1,1,1,1,1,0,1,0},
		{1,0,0,0,0,0,1,0,0,0,0,0},
		{1,1,1,1,1,0,1,1,1,0,1,1},
		{1,0,0,0,1,0,0,0,0,0,0,0},
		{1,0,1,0,1,0,1,0,1,0,1,0},
		{1,0,1,0,0,0,1,0,1,0,1,0},
		{1,1,1,1,1,1,1,1,1,0,1,0},
		{1,0,0,0,0,0,0,0,0,0,1,3}
	},
	{	// Eighth Obstacle Course
		{2,0,0,0,0,0,0,0,0,0,0,0},
		{1,0,1,1,1,1,1,0,1,1,1,0},
		{1,0,0,0,1,0,0,0,1,0,0,0},
		{1,1,1,1,1,0,1,1,1,1,1,1},
		{1,0,0,0,1,0,1,0,0,0,0,0},
		{1,0,1,1,1,0,1,1,1,0,1,0},
		{1,0,0,0,0,0,0,0,1,0,1,0},
		{1,1,1,0,1,0,1,1,1,1,1,0},
		{1,0,0,0,1,0,0,0,0,0,0,3}
	},
	{
		// Ninth Obstacle Course
		{2,0,0,0,0,0,1,0,1,0,1,0},
		{1,0,1,1,1,1,1,0,1,0,1,0},
		{1,0,0,0,1,0,0,0,0,0,0,0},
		{1,0,1,0,1,1,1,0,1,1,1,1},
		{1,0,1,0,1,0,1,0,0,0,1,0},
		{1,0,1,1,1,0,1,0,1,1,1,0},
		{1,0,0,0,1,0,0,0,0,0,1,0},
		{1,0,1,1,1,0,1,1,1,0,1,0},
		{1,0,0,0,0,0,1,0,0,0,0,3}
	},
};

// TODO: Copy your drivers here.
void init() {
	__asm__(
		".equ PS2_DATA, 0xFF200100\n\t"
	);
}

// TODO: copy VGA driver here.
void VGA_draw_point_ASM(int x, int y, short c) {
	__asm__  __volatile__(
		"PUSH {R0-R12}\n\t"
		"MOV R0, %0\n\t"
		"MOV R1, %1\n\t"
		"MOV R2, %2\n\t"
		"MOV R3, #0xc8000000\n\t"
		"LSL R0, R0, #1\n\t"
		"LSL R1, R1, #10\n\t"
		"ADD R3, R3, R0\n\t"
		"ADD R3, R3, R1\n\t"
		"STRH R2, [R3]\n\t"
		"POP {R0-R12}\n\t"
        :    
        :"r"(x), "r"(y), "r"(c) // input operands %0, %1, and %2
	);
}


void VGA_clear_pixelbuff_ASM() {
	for (int i = 0; i < 320; i++){
		for (int j = 0; j < 240; j++){
			VGA_draw_point_ASM(i, j, 0);
		}
	}
}

void VGA_write_char_ASM(int x, int y, char c) {
	if (x >= 0 && x <= 79 && y >=0 && y <= 59){
		__asm__  __volatile__(
			"PUSH {R0-R12}\n\t"
			"MOV R4, %0\n\t"
			"MOV R5, %1\n\t"
			"MOV R6, %2\n\t"
			"MOV R7, #0xc9000000\n\t" 
			"LSL R5, R5, #7\n\t"
			"ADD R7, R7, R5\n\t"
			"ADD R7, R7, R4\n\t"
			"STRB R6, [R7]\n\t"
			"POP {R0-R12}\n\t"
			:    
			:"r"(x), "r"(y), "r"(c) // input operands %0, %1, and %2
		);
	}	
}

void VGA_clear_charbuff_ASM() {
	for (int i = 0; i < 80; i++){
		for (int j = 0; j < 60; j++){
			VGA_write_char_ASM(i, j, 0);
		}
	}
}

// TODO: PS/2 driver.
int read_PS2_data_ASM(char *data) {
	int val = 0;
	__asm__  __volatile__(
		"PUSH {R3-R12}\n\t"
		"mov        r0, %1\n\t"
		"LDR R1, =PS2_DATA\n\t" //load address of PS2
		"LDR R2, [R1]\n\t"//load data of PS2
		"MOV R3, #32768\n\t"
		"AND R4, R3, R2\n\t"
		"CMP R4, R3\n\t"//check if RVALID is 1
		"BEQ rValidTrue\n\t"
		
		"MOV R7, #0\n\t"
		"B end\n\t"
		
		"rValidTrue:\n\t"
		"MOV R5, #255\n\t"
		"AND R6, R2, R5\n\t"//retrieve data
		"STRB R6, [R0]\n\t"//store data into input
		"MOV R7, #1\n\t"
		
		"end:\n\t"
		"mov        %0, r7\n\t"
		"POP {R3-R12}\n\t"
		:"=r"(val) // output operands %0
		:"r"(data) // input operands %1
	);
	return val;
}

void VGA_fill_ASM(){
	VGA_clear_pixelbuff_ASM(); //black background
	VGA_clear_charbuff_ASM();
}

int gridSize = 25;

void draw_grid_ASM(){
	for (int i = 0; i < 13; i++){
		for (int j = 0; j < 225; j++){
			int width = i * gridSize;
			VGA_draw_point_ASM(width, j, 0xffff);
		}
	}
	
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 300; j++){
			int height = i * gridSize;
			VGA_draw_point_ASM(j, height, 0xffff);
		}
	}
}

void draw_ampersand_ASM(int x, int y){
	VGA_write_char_ASM(x/4, y/4, 38);
}

void draw_exit_ASM(int x, int y){
	VGA_write_char_ASM((x-4)/4, y/4, 69);
	VGA_write_char_ASM((x)/4, y/4, 88);
	VGA_write_char_ASM((x+4)/4, y/4, 73);
	VGA_write_char_ASM((x+8)/4, y/4, 84);
}

void draw_obstacles_ASM(int x, int y){
	int halfGridSize = (gridSize - 1)/2;
	for (int i = x - halfGridSize; i <= x + halfGridSize; i++){
		for (int j = y - halfGridSize; j <= y + halfGridSize; j++){
			VGA_draw_point_ASM(i, j, 0xffff);
		}
	}			
}

void fill_grid_ASM(int num){
	int halfGridSize = (gridSize - 1)/2;
	for (int i = 0; i < 12; i++){
		for (int j = 0; j < 9; j++){
			if (mazes[num][j][i] == 1){
				int x = (i * gridSize) + halfGridSize;
				int y = (j * gridSize) + halfGridSize;
				draw_obstacles_ASM(x, y);
			}
		}
	}
}

int xPos;
int yPos;
int nextXPos;
int nextYPos;

int num;


void move_ASM(){
	int halfGridSize = (gridSize - 1)/2;
	
	if (nextXPos < 0 || nextXPos > 11 || nextYPos < 0 || nextYPos > 8){
		return;
	}
	
	if (mazes[num][nextYPos][nextXPos] != 1){
		xPos = nextXPos;
		yPos = nextYPos;
		
		int x = (nextXPos * gridSize) + halfGridSize;
		int y = (nextYPos * gridSize) + halfGridSize;
		
		VGA_clear_charbuff_ASM();
		draw_ampersand_ASM(x, y);
		draw_exit_ASM(287, 208);
		
		if (nextXPos == 11 && nextYPos == 8){
			result_ASM(1);
		}
		else{
			result_ASM(0);
		}
	}
	else{
		return;
	}
		
}

void result_ASM(int result){
	if (result == 1){
		VGA_clear_pixelbuff_ASM();
		VGA_clear_charbuff_ASM();
		VGA_write_char_ASM(24, 30, 'C');
		VGA_write_char_ASM(28, 30, 'O');
		VGA_write_char_ASM(32, 30, 'N');
		VGA_write_char_ASM(36, 30, 'G');
		VGA_write_char_ASM(40, 30, 'R');
		VGA_write_char_ASM(44, 30, 'A');
		VGA_write_char_ASM(48, 30, 'T');
		VGA_write_char_ASM(52, 30, 'S');
	}
}

int main() {
	int i = 0;
	while (i == 0){
		
		VGA_fill_ASM();
		draw_grid_ASM();
		
		while (i == 0){

			char data;
			int input = read_PS2_data_ASM(&data);

			if (input){
				if (data == 22){
					num = 0;
					break;
				}

				if (data == 30){
					num = 1;
					break;
				}
				if (data == 38){
					num = 2;
					break;
				}
				if (data == 37){
					num = 3;
					break;
				}
				if (data == 46){
					num = 4;
					break;
				}
				if (data == 54){
					num = 5;
					break;
				}
				if (data == 61){
					num = 6;
					break;
				}
				if (data == 62){
					num = 7;
					break;
				}
				if (data == 70){
					num = 8;
					break;
				}
			}
		}
		
		//setup
		xPos = 0;
		yPos = 0;
		draw_grid_ASM();
		draw_ampersand_ASM(12, 12);
		draw_exit_ASM(287, 208);
		fill_grid_ASM(num);
		result_ASM(0);
		
		while(i == 0){
			char dir1;
			char dir2;
			char dir3;
			int dir1Data = read_PS2_data_ASM(&dir1);

			if (dir1Data){
				if (dir1 == 116 || dir1 == 117 || dir1 == 107 || dir1 ==114){
					
					while (i == 0){
						
						int dir2Data = read_PS2_data_ASM(&dir2);

						if (dir2 == 240 && dir2Data){

							read_PS2_data_ASM(&dir3);
							read_PS2_data_ASM(&dir3);

							if(dir1 == 117){
								nextYPos = yPos - 1;
								nextXPos = xPos;

								move_ASM();

							}

							if(dir1 ==114){
								nextYPos = yPos + 1;
								nextXPos = xPos;

								move_ASM();
							}

							if(dir1 ==116){
								nextXPos = xPos + 1;
								nextYPos = yPos;

								move_ASM();
							}
							if(dir1 ==107){
								nextXPos = xPos -1;
								nextYPos = yPos;

								move_ASM();
							}
							
							break;
						}
					}
				}
			}
			
			if(xPos == 11 && yPos == 8){
				break;
			}
		}
		
		for (int i = 0; i < 10; i++){
			result_ASM(1);
		}
		xPos = 0;
		yPos = 0;
		nextXPos = 0;
		nextYPos = 0;
		
		
	}	
	
	return 0;
}
	