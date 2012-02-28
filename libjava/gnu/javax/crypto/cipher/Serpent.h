
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_cipher_Serpent__
#define __gnu_javax_crypto_cipher_Serpent__

#pragma interface

#include <gnu/javax/crypto/cipher/BaseCipher.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace cipher
        {
            class Serpent;
        }
      }
    }
  }
}

class gnu::javax::crypto::cipher::Serpent : public ::gnu::javax::crypto::cipher::BaseCipher
{

public:
  Serpent();
  virtual ::java::lang::Object * clone();
  virtual ::java::util::Iterator * blockSizes();
  virtual ::java::util::Iterator * keySizes();
  virtual ::java::lang::Object * makeKey(JArray< jbyte > *, jint);
  virtual void encrypt(JArray< jbyte > *, jint, JArray< jbyte > *, jint, ::java::lang::Object *, jint);
  virtual void decrypt(JArray< jbyte > *, jint, JArray< jbyte > *, jint, ::java::lang::Object *, jint);
  virtual jboolean selfTest();
private:
  void sbox0();
  void sbox1();
  void sbox2();
  void sbox3();
  void sbox4();
  void sbox5();
  void sbox6();
  void sbox7();
  void sbox7noLT();
  void sboxI7noLT();
  void sboxI6();
  void sboxI5();
  void sboxI4();
  void sboxI3();
  void sboxI2();
  void sboxI1();
  void sboxI0();
  void sboxI7();
  void sbox0(jint, jint, jint, jint);
  void sbox1(jint, jint, jint, jint);
  void sbox2(jint, jint, jint, jint);
  void sbox3(jint, jint, jint, jint);
  void sbox4(jint, jint, jint, jint);
  void sbox5(jint, jint, jint, jint);
  void sbox6(jint, jint, jint, jint);
  void sbox7(jint, jint, jint, jint);
  static const jint DEFAULT_KEY_SIZE = 16;
  static const jint DEFAULT_BLOCK_SIZE = 16;
  static const jint ROUNDS = 32;
  static const jint PHI = -1640531527;
  static JArray< jbyte > * KAT_KEY;
  static JArray< jbyte > * KAT_CT;
  static ::java::lang::Boolean * valid;
  jint __attribute__((aligned(__alignof__( ::gnu::javax::crypto::cipher::BaseCipher)))) x0;
  jint x1;
  jint x2;
  jint x3;
  jint x4;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_cipher_Serpent__
