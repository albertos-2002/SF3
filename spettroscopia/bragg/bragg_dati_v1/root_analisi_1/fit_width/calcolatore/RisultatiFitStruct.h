#ifndef RISAULTATI_FIT_STRUCT
#define RISAULTATI_FIT_STRUCT

struct dati350mb {

  static constexpr float width_americio     = 6.46762e+01;  // [a.u]  
  static constexpr float err_width_americio = 3.16125e-02;  // [a.u]
};

struct dati450mb {

  static constexpr float width_nettunio     = 4.60164e+01;  // [a.u]
  static constexpr float width_americio     = 5.57991e+01;  // [a.u]
  static constexpr float width_curio        = 6.00646e+01;  // [a.u]
  
  static constexpr float err_width_nettunio = 1.23267e-01;  // [a.u]
  static constexpr float err_width_americio = 4.88721e-02;  // [a.u]
  static constexpr float err_width_curio    = 1.23916e-01;  // [a.u]
};

struct dati500mb {

  static constexpr float width_nettunio     = 4.32919e+01;  // [a.u]
  static constexpr float width_americio     = 5.19537e+01;  // [a.u]
  static constexpr float width_curio        = 5.59023e+01;  // [a.u]
  
  static constexpr float err_width_nettunio = 7.66494e-02;  // [a.u]
  static constexpr float err_width_americio = 3.53134e-02;  // [a.u]
  static constexpr float err_width_curio    = 5.17026e-02;  // [a.u]
};

struct dati550mb {

  static constexpr float width_nettunio     = 4.09297e+01;  // [a.u]
  static constexpr float width_americio     = 4.88944e+01;  // [a.u]
  static constexpr float width_curio        = 5.28121e+01;  // [a.u]
  
  static constexpr float err_width_nettunio = 9.59469e-02;  // [a.u]
  static constexpr float err_width_americio = 3.13116e-02;  // [a.u]
  static constexpr float err_width_curio    = 4.54360e-02;  // [a.u]
};

struct dati600mb {

  static constexpr float width_nettunio     = 3.87995e+01;  // [a.u]
  static constexpr float width_americio     = 4.64522e+01;  // [a.u]
  static constexpr float width_curio        = 4.98270e+01;  // [a.u]
  
  static constexpr float err_width_nettunio = 9.83996e-02;  // [a.u]
  static constexpr float err_width_americio = 5.92459e-02;  // [a.u]
  static constexpr float err_width_curio    = 9.51443e-02;  // [a.u]
};
/*
struct dati650mb { //empty

  static constexpr float width_nettunio     = ;  // [a.u]
  static constexpr float width_americio     = ;  // [a.u]
  static constexpr float width_curio        = ;  // [a.u]
  
  static constexpr float err_width_nettunio = ;  // [a.u]
  static constexpr float err_width_americio = ;  // [a.u]
  static constexpr float err_width_curio    = ;  // [a.u]
};
*/

#endif
