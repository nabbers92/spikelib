#include <string.h>

#include <iostream>
#include <vector>

#include "include/Leap.h"
#include "include/framelistener.h"
#include "include/tuningcurves.h"

int main(int argc, char** argv) {
  int bone_idx = 3;

<<<<<<< HEAD:src/main.cc
  std::vector<std::vector<float>> base = ReadBaseCurves("data/basecurves.csv");
  std::cout << base.size() << std::endl;
  std::vector<std::vector<float>> tuning_curves = CreateTuningCurves(
      base, 5, 192);
  std::cout << tuning_curves.size() << std::endl;
=======
  std::vector<std::vector<float> > base = ReadBaseCurves("data/basecurves.csv");

>>>>>>> eb909f4d58c5e85c97b257e52c69dd948759dbba:main.cc
  FrameListener listener(bone_idx);
  Leap::Controller controller;

  controller.addListener(listener);

  // Keep this process running until Enter is pressed
  std::cout << "Press Enter to quit..." << std::endl;
  std::cin.get();

  // Remove the sample listener when done
  controller.removeListener(listener);

  return 0;
}