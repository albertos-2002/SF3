#ifndef UTIL
#define UTIL

bool debug_opt = false;

struct parametri {

  static constexpr float sampling_time = 80; // [ns/a.u.]
  static constexpr float lunghezza_camera = 117; // [mm]
};

struct risultati_calcolo {
  
  float velocita_drift;
  float err_velocita_drift;
  float velocita_scalata;
  float err_velocita_scalata;
};

#endif
