Project: Wayland-Handshake-Diagnostic
A low-level C++ diagnostic tool designed to verify communication between a client application and a Wayland compositor (e.g., Hyprland).

Purpose: Programmatically verify if the WAYLAND_DISPLAY environment variable and the compositor socket are active and reachable.

Technical Implementation:

Directly interfaces with libwayland-client.

Implements a standard connection-and-cleanup lifecycle to ensure no resource leaks.

Returns distinct exit codes for failure (1) and success (0), making it suitable for integration into shell scripts or CI/CD pipelines.
