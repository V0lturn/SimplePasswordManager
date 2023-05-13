#include "General.h"

string sm3(const std::string& input) {
	CryptoPP::SM3 hash;
	CryptoPP::HexEncoder encoder;
	std::string output;
	byte digest[CryptoPP::SM3::DIGESTSIZE];
	hash.CalculateDigest(digest, reinterpret_cast<const
		byte*>(input.c_str()), input.length());
	encoder.Attach(new CryptoPP::StringSink(output));
	encoder.Put(digest, sizeof(digest));
	encoder.MessageEnd();
	return output;
}