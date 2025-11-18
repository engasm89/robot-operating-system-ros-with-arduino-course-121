// Extended ROS pub/sub simulation tailored to course flow
#include <stdio.h> // Logs

static void pub(const char* t, const char* p) { printf("PUB %s %s\n", t, p); } // Publish
static void sub(const char* t) { printf("SUB %s -> CMD=STOP\n", t); } // Subscribe

int main(void) { // Entry
  printf("Robot Operating System (ROS) with Arduino (Course 121)\n"); // Title
  pub("/course121/sensor", "{\"distance\":15}"); // Sensor
  sub("/course121/motor_cmd"); // Command
  pub("/course121/ack", "{\"received\":true}"); // Ack
  return 0; // Exit
} // End main
