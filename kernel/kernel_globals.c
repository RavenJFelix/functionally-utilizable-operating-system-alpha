#include "keyboard.h"
#include "kernel_globals.h"
#include "terminal.h"

#include "vga_const.h"
#include "vga_const_color.h"
#include "memory.h"
Terminal main_terminal = {{0,0}, {FB_MAX_COLS, FB_MAX_ROWS}, FB_MATRIX_COLORZ };
uc_ring_buffer kernel_keyboard_buffer;

unsigned char kernel_frame_map[524288];
unsigned long kernel_page_directory[1024]__attribute__((aligned(4096)));

Keyboard kernel_keyboard;


unsigned char kernel_keyboard_buffer_data[KERNEL_KEYBOARD_BUFFER_SIZE];
void kernel_globals_init()
{
	unsigned long buffer_size = 100;
	unsigned long data_size = sizeof(unsigned long) * buffer_size;
	unsigned char *test_buffer_data = memalloc(data_size);

	kernel_keyboard_buffer.front = 0;
	kernel_keyboard_buffer.back = 0;
	kernel_keyboard_buffer.data = test_buffer_data;
	kernel_keyboard_buffer.length = buffer_size;

	kernel_keyboard.caps = false;
}
