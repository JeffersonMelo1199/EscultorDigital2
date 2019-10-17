#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <cmath>
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;


/**
 * @brief The Voxel struct
 */

struct Voxel {
  float r,g,b; // Colors
  float a; // Transparency
  bool isOn; // Included or not
};

/**
 * @brief The Sculptor class
 */


class Sculptor {
protected:
  Voxel ***v;  // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:

  /**
       * @brief Sculptor
       */

  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();

  /**
       * @brief putVoxel
       */

  void PutVoxel(int x, int y, int z);

  /**
       * @brief cutVoxel
       */

  void CutVoxel (int x, int y, int z);

  /**
       * @brief setColor
       */

  void SetColor(float r_, float g_, float b_, float alpha);

  /**
       * @brief writeOFF
       */

  void writeOFF(string filename);
};
#endif // SCULPTOR_H
