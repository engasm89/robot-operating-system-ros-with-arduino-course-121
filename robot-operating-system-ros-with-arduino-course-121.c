/*
 * Course: Robot Operating System Ros With Arduino Course 121
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Robot Operating System Ros With Arduino Course 121" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/robot-operating-system-ros-with-arduino-course-121/
 * Repository: https://github.com/engasm89/robot-operating-system-ros-with-arduino-course-121
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

// Extended ROS pub/sub simulation tailored to course flow
#include <stdio.h> // Logs

static void pub(const char* t, const char* p) { printf("PUB %s %s\n", t, p); } // Publish
static void sub(const char* t) { printf("SUB %s -> CMD=STOP\n", t); } // Subscribe

int main(void) { // Program entry point
  printf("Robot Operating System (ROS) with Arduino (Course 121)\n"); // Title
  pub("/course121/sensor", "{\"distance\":15}"); // Sensor
  sub("/course121/motor_cmd"); // Command
  pub("/course121/ack", "{\"received\":true}"); // Ack
  return 0; // Exit
} // End of main function
