#include <iostream>
#include <wayland-client.h>

int main(){
	struct wl_display* display = wl_display_connect(NULL);

	if(!display){
		std::cout<<"Failed to connect to Wayland display! Is Hyperland running?" << std::endl;
		return 1;
	}

	std::cout<<"Connection Established: The Domain is Open." << std::endl;

	wl_display_disconnect(display);
	return 0;
}
