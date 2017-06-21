/*
* OID maps
*
* This file was automatically generated by ./src/scripts/oids.py on 2017-06-22
*
* All manual edits to this file will be lost. Edit the script
* then regenerate this source file.
*
* Botan is released under the Simplified BSD License (see license.txt)
*/

#include <botan/oids.h>

namespace Botan {

namespace OIDS {

std::string lookup(const OID& oid)
   {
   const std::string oid_str = oid.as_string();
   if(oid_str == "1.0.14888.3.0.5") return "ECKCDSA";
   if(oid_str == "1.2.156.10197.1.301.1") return "SM2_Sig";
   if(oid_str == "1.2.156.10197.1.301.2") return "SM2_Kex";
   if(oid_str == "1.2.156.10197.1.301.3") return "SM2_Enc";
   if(oid_str == "1.2.156.10197.1.401") return "SM3";
   if(oid_str == "1.2.156.10197.1.504") return "RSA/EMSA3(SM3)";
   if(oid_str == "1.2.250.1.223.101.256.1") return "frp256v1";
   if(oid_str == "1.2.410.200004.1.100.4.3") return "ECKCDSA/EMSA1(SHA-1)";
   if(oid_str == "1.2.410.200004.1.100.4.4") return "ECKCDSA/EMSA1(SHA-224)";
   if(oid_str == "1.2.410.200004.1.100.4.5") return "ECKCDSA/EMSA1(SHA-256)";
   if(oid_str == "1.2.410.200004.1.4") return "SEED/CBC";
   if(oid_str == "1.2.643.2.2.19") return "GOST-34.10";
   if(oid_str == "1.2.643.2.2.3") return "GOST-34.10/EMSA1(GOST-R-34.11-94)";
   if(oid_str == "1.2.643.2.2.35.1") return "gost_256A";
   if(oid_str == "1.2.643.2.2.36.0") return "gost_256A";
   if(oid_str == "1.2.840.10040.4.1") return "DSA";
   if(oid_str == "1.2.840.10040.4.3") return "DSA/EMSA1(SHA-160)";
   if(oid_str == "1.2.840.10045.2.1") return "ECDSA";
   if(oid_str == "1.2.840.10045.3.1.1") return "secp192r1";
   if(oid_str == "1.2.840.10045.3.1.2") return "x962_p192v2";
   if(oid_str == "1.2.840.10045.3.1.3") return "x962_p192v3";
   if(oid_str == "1.2.840.10045.3.1.4") return "x962_p239v1";
   if(oid_str == "1.2.840.10045.3.1.5") return "x962_p239v2";
   if(oid_str == "1.2.840.10045.3.1.6") return "x962_p239v3";
   if(oid_str == "1.2.840.10045.3.1.7") return "secp256r1";
   if(oid_str == "1.2.840.10045.4.1") return "ECDSA/EMSA1(SHA-160)";
   if(oid_str == "1.2.840.10045.4.3.1") return "ECDSA/EMSA1(SHA-224)";
   if(oid_str == "1.2.840.10045.4.3.2") return "ECDSA/EMSA1(SHA-256)";
   if(oid_str == "1.2.840.10045.4.3.3") return "ECDSA/EMSA1(SHA-384)";
   if(oid_str == "1.2.840.10045.4.3.4") return "ECDSA/EMSA1(SHA-512)";
   if(oid_str == "1.2.840.10046.2.1") return "DH";
   if(oid_str == "1.2.840.113533.7.66.10") return "CAST-128/CBC";
   if(oid_str == "1.2.840.113533.7.66.15") return "KeyWrap.CAST-128";
   if(oid_str == "1.2.840.113549.1.1.1") return "RSA";
   if(oid_str == "1.2.840.113549.1.1.11") return "RSA/EMSA3(SHA-256)";
   if(oid_str == "1.2.840.113549.1.1.12") return "RSA/EMSA3(SHA-384)";
   if(oid_str == "1.2.840.113549.1.1.13") return "RSA/EMSA3(SHA-512)";
   if(oid_str == "1.2.840.113549.1.1.4") return "RSA/EMSA3(MD5)";
   if(oid_str == "1.2.840.113549.1.1.5") return "RSA/EMSA3(SHA-160)";
   if(oid_str == "1.2.840.113549.1.5.12") return "PKCS5.PBKDF2";
   if(oid_str == "1.2.840.113549.1.5.13") return "PBE-PKCS5v20";
   if(oid_str == "1.2.840.113549.1.9.1") return "PKCS9.EmailAddress";
   if(oid_str == "1.2.840.113549.1.9.14") return "PKCS9.ExtensionRequest";
   if(oid_str == "1.2.840.113549.1.9.16.3.6") return "KeyWrap.TripleDES";
   if(oid_str == "1.2.840.113549.1.9.16.3.7") return "KeyWrap.RC2";
   if(oid_str == "1.2.840.113549.1.9.16.3.8") return "Compression.Zlib";
   if(oid_str == "1.2.840.113549.1.9.2") return "PKCS9.UnstructuredName";
   if(oid_str == "1.2.840.113549.1.9.3") return "PKCS9.ContentType";
   if(oid_str == "1.2.840.113549.1.9.4") return "PKCS9.MessageDigest";
   if(oid_str == "1.2.840.113549.1.9.7") return "PKCS9.ChallengePassword";
   if(oid_str == "1.2.840.113549.2.10") return "HMAC(SHA-384)";
   if(oid_str == "1.2.840.113549.2.11") return "HMAC(SHA-512)";
   if(oid_str == "1.2.840.113549.2.5") return "MD5";
   if(oid_str == "1.2.840.113549.2.7") return "HMAC(SHA-160)";
   if(oid_str == "1.2.840.113549.2.8") return "HMAC(SHA-224)";
   if(oid_str == "1.2.840.113549.2.9") return "HMAC(SHA-256)";
   if(oid_str == "1.2.840.113549.3.2") return "RC2/CBC";
   if(oid_str == "1.2.840.113549.3.7") return "TripleDES/CBC";
   if(oid_str == "1.3.101.110") return "Curve25519";
   if(oid_str == "1.3.101.112") return "Ed25519";
   if(oid_str == "1.3.132.0.10") return "secp256k1";
   if(oid_str == "1.3.132.0.30") return "secp160r2";
   if(oid_str == "1.3.132.0.31") return "secp192k1";
   if(oid_str == "1.3.132.0.32") return "secp224k1";
   if(oid_str == "1.3.132.0.33") return "secp224r1";
   if(oid_str == "1.3.132.0.34") return "secp384r1";
   if(oid_str == "1.3.132.0.35") return "secp521r1";
   if(oid_str == "1.3.132.0.8") return "secp160r1";
   if(oid_str == "1.3.132.0.9") return "secp160k1";
   if(oid_str == "1.3.132.1.12") return "ECDH";
   if(oid_str == "1.3.14.3.2.26") return "SHA-160";
   if(oid_str == "1.3.14.3.2.7") return "DES/CBC";
   if(oid_str == "1.3.36.3.3.1.2") return "RSA/EMSA3(RIPEMD-160)";
   if(oid_str == "1.3.36.3.3.2.5.2.1") return "ECGDSA";
   if(oid_str == "1.3.36.3.3.2.5.4.1") return "ECGDSA/EMSA1(RIPEMD-160)";
   if(oid_str == "1.3.36.3.3.2.5.4.2") return "ECGDSA/EMSA1(SHA-160)";
   if(oid_str == "1.3.36.3.3.2.5.4.3") return "ECGDSA/EMSA1(SHA-224)";
   if(oid_str == "1.3.36.3.3.2.5.4.4") return "ECGDSA/EMSA1(SHA-256)";
   if(oid_str == "1.3.36.3.3.2.5.4.5") return "ECGDSA/EMSA1(SHA-384)";
   if(oid_str == "1.3.36.3.3.2.5.4.6") return "ECGDSA/EMSA1(SHA-512)";
   if(oid_str == "1.3.36.3.3.2.8.1.1.1") return "brainpool160r1";
   if(oid_str == "1.3.36.3.3.2.8.1.1.11") return "brainpool384r1";
   if(oid_str == "1.3.36.3.3.2.8.1.1.13") return "brainpool512r1";
   if(oid_str == "1.3.36.3.3.2.8.1.1.3") return "brainpool192r1";
   if(oid_str == "1.3.36.3.3.2.8.1.1.5") return "brainpool224r1";
   if(oid_str == "1.3.36.3.3.2.8.1.1.7") return "brainpool256r1";
   if(oid_str == "1.3.36.3.3.2.8.1.1.9") return "brainpool320r1";
   if(oid_str == "1.3.6.1.4.1.11591.12.2") return "Tiger(24,3)";
   if(oid_str == "1.3.6.1.4.1.25258.1.3") return "McEliece";
   if(oid_str == "1.3.6.1.4.1.25258.1.5") return "XMSS";
   if(oid_str == "1.3.6.1.4.1.25258.1.6.1") return "GOST-34.10/EMSA1(SHA-256)";
   if(oid_str == "1.3.6.1.4.1.25258.3.1") return "Serpent/CBC";
   if(oid_str == "1.3.6.1.4.1.25258.3.101") return "Serpent/GCM";
   if(oid_str == "1.3.6.1.4.1.25258.3.102") return "Twofish/GCM";
   if(oid_str == "1.3.6.1.4.1.25258.3.2") return "Threefish-512/CBC";
   if(oid_str == "1.3.6.1.4.1.25258.3.2.1") return "AES-128/OCB";
   if(oid_str == "1.3.6.1.4.1.25258.3.2.2") return "AES-192/OCB";
   if(oid_str == "1.3.6.1.4.1.25258.3.2.3") return "AES-256/OCB";
   if(oid_str == "1.3.6.1.4.1.25258.3.2.4") return "Serpent/OCB";
   if(oid_str == "1.3.6.1.4.1.25258.3.2.5") return "Twofish/OCB";
   if(oid_str == "1.3.6.1.4.1.25258.3.3") return "Twofish/CBC";
   if(oid_str == "1.3.6.1.4.1.3029.1.2.1") return "ElGamal";
   if(oid_str == "1.3.6.1.4.1.311.20.2.2") return "Microsoft SmartcardLogon";
   if(oid_str == "1.3.6.1.4.1.8301.3.1.2.9.0.38") return "secp521r1";
   if(oid_str == "1.3.6.1.5.5.7.1.1") return "PKIX.AuthorityInformationAccess";
   if(oid_str == "1.3.6.1.5.5.7.3.1") return "PKIX.ServerAuth";
   if(oid_str == "1.3.6.1.5.5.7.3.2") return "PKIX.ClientAuth";
   if(oid_str == "1.3.6.1.5.5.7.3.3") return "PKIX.CodeSigning";
   if(oid_str == "1.3.6.1.5.5.7.3.4") return "PKIX.EmailProtection";
   if(oid_str == "1.3.6.1.5.5.7.3.5") return "PKIX.IPsecEndSystem";
   if(oid_str == "1.3.6.1.5.5.7.3.6") return "PKIX.IPsecTunnel";
   if(oid_str == "1.3.6.1.5.5.7.3.7") return "PKIX.IPsecUser";
   if(oid_str == "1.3.6.1.5.5.7.3.8") return "PKIX.TimeStamping";
   if(oid_str == "1.3.6.1.5.5.7.3.9") return "PKIX.OCSPSigning";
   if(oid_str == "1.3.6.1.5.5.7.48.1") return "PKIX.OCSP";
   if(oid_str == "1.3.6.1.5.5.7.48.1.1") return "PKIX.OCSP.BasicResponse";
   if(oid_str == "1.3.6.1.5.5.7.8.5") return "PKIX.XMPPAddr";
   if(oid_str == "2.16.840.1.101.3.4.1.2") return "AES-128/CBC";
   if(oid_str == "2.16.840.1.101.3.4.1.22") return "AES-192/CBC";
   if(oid_str == "2.16.840.1.101.3.4.1.25") return "KeyWrap.AES-192";
   if(oid_str == "2.16.840.1.101.3.4.1.26") return "AES-192/GCM";
   if(oid_str == "2.16.840.1.101.3.4.1.27") return "AES-192/CCM";
   if(oid_str == "2.16.840.1.101.3.4.1.42") return "AES-256/CBC";
   if(oid_str == "2.16.840.1.101.3.4.1.45") return "KeyWrap.AES-256";
   if(oid_str == "2.16.840.1.101.3.4.1.46") return "AES-256/GCM";
   if(oid_str == "2.16.840.1.101.3.4.1.47") return "AES-256/CCM";
   if(oid_str == "2.16.840.1.101.3.4.1.5") return "KeyWrap.AES-128";
   if(oid_str == "2.16.840.1.101.3.4.1.6") return "AES-128/GCM";
   if(oid_str == "2.16.840.1.101.3.4.1.7") return "AES-128/CCM";
   if(oid_str == "2.16.840.1.101.3.4.2.1") return "SHA-256";
   if(oid_str == "2.16.840.1.101.3.4.2.10") return "SHA-3(512)";
   if(oid_str == "2.16.840.1.101.3.4.2.11") return "SHAKE-128";
   if(oid_str == "2.16.840.1.101.3.4.2.12") return "SHAKE-256";
   if(oid_str == "2.16.840.1.101.3.4.2.2") return "SHA-384";
   if(oid_str == "2.16.840.1.101.3.4.2.3") return "SHA-512";
   if(oid_str == "2.16.840.1.101.3.4.2.4") return "SHA-224";
   if(oid_str == "2.16.840.1.101.3.4.2.6") return "SHA-512-256";
   if(oid_str == "2.16.840.1.101.3.4.2.7") return "SHA-3(224)";
   if(oid_str == "2.16.840.1.101.3.4.2.8") return "SHA-3(256)";
   if(oid_str == "2.16.840.1.101.3.4.2.9") return "SHA-3(384)";
   if(oid_str == "2.16.840.1.101.3.4.3.1") return "DSA/EMSA1(SHA-224)";
   if(oid_str == "2.16.840.1.101.3.4.3.10") return "ECDSA/EMSA1(SHA-3(256))";
   if(oid_str == "2.16.840.1.101.3.4.3.11") return "ECDSA/EMSA1(SHA-3(384))";
   if(oid_str == "2.16.840.1.101.3.4.3.12") return "ECDSA/EMSA1(SHA-3(512))";
   if(oid_str == "2.16.840.1.101.3.4.3.13") return "RSA/EMSA3(SHA-3(224))";
   if(oid_str == "2.16.840.1.101.3.4.3.14") return "RSA/EMSA3(SHA-3(256))";
   if(oid_str == "2.16.840.1.101.3.4.3.15") return "RSA/EMSA3(SHA-3(384))";
   if(oid_str == "2.16.840.1.101.3.4.3.16") return "RSA/EMSA3(SHA-3(512))";
   if(oid_str == "2.16.840.1.101.3.4.3.2") return "DSA/EMSA1(SHA-256)";
   if(oid_str == "2.16.840.1.101.3.4.3.3") return "DSA/EMSA1(SHA-384)";
   if(oid_str == "2.16.840.1.101.3.4.3.4") return "DSA/EMSA1(SHA-512)";
   if(oid_str == "2.16.840.1.101.3.4.3.5") return "DSA/EMSA1(SHA-3(224))";
   if(oid_str == "2.16.840.1.101.3.4.3.6") return "DSA/EMSA1(SHA-3(256))";
   if(oid_str == "2.16.840.1.101.3.4.3.7") return "DSA/EMSA1(SHA-3(384))";
   if(oid_str == "2.16.840.1.101.3.4.3.8") return "DSA/EMSA1(SHA-3(512))";
   if(oid_str == "2.16.840.1.101.3.4.3.9") return "ECDSA/EMSA1(SHA-3(224))";
   if(oid_str == "2.5.29.14") return "X509v3.SubjectKeyIdentifier";
   if(oid_str == "2.5.29.15") return "X509v3.KeyUsage";
   if(oid_str == "2.5.29.17") return "X509v3.SubjectAlternativeName";
   if(oid_str == "2.5.29.18") return "X509v3.IssuerAlternativeName";
   if(oid_str == "2.5.29.19") return "X509v3.BasicConstraints";
   if(oid_str == "2.5.29.20") return "X509v3.CRLNumber";
   if(oid_str == "2.5.29.21") return "X509v3.ReasonCode";
   if(oid_str == "2.5.29.23") return "X509v3.HoldInstructionCode";
   if(oid_str == "2.5.29.24") return "X509v3.InvalidityDate";
   if(oid_str == "2.5.29.30") return "X509v3.NameConstraints";
   if(oid_str == "2.5.29.31") return "X509v3.CRLDistributionPoints";
   if(oid_str == "2.5.29.32") return "X509v3.CertificatePolicies";
   if(oid_str == "2.5.29.32.0") return "X509v3.AnyPolicy";
   if(oid_str == "2.5.29.35") return "X509v3.AuthorityKeyIdentifier";
   if(oid_str == "2.5.29.36") return "X509v3.PolicyConstraints";
   if(oid_str == "2.5.29.37") return "X509v3.ExtendedKeyUsage";
   if(oid_str == "2.5.4.10") return "X520.Organization";
   if(oid_str == "2.5.4.11") return "X520.OrganizationalUnit";
   if(oid_str == "2.5.4.12") return "X520.Title";
   if(oid_str == "2.5.4.3") return "X520.CommonName";
   if(oid_str == "2.5.4.4") return "X520.Surname";
   if(oid_str == "2.5.4.42") return "X520.GivenName";
   if(oid_str == "2.5.4.43") return "X520.Initials";
   if(oid_str == "2.5.4.44") return "X520.GenerationalQualifier";
   if(oid_str == "2.5.4.46") return "X520.DNQualifier";
   if(oid_str == "2.5.4.5") return "X520.SerialNumber";
   if(oid_str == "2.5.4.6") return "X520.Country";
   if(oid_str == "2.5.4.65") return "X520.Pseudonym";
   if(oid_str == "2.5.4.7") return "X520.Locality";
   if(oid_str == "2.5.4.8") return "X520.State";
   if(oid_str == "2.5.8.1.1") return "RSA";

#if defined(BOTAN_HOUSE_ECC_CURVE_NAME)
   if(oid_str == BOTAN_HOUSE_ECC_CURVE_OID) return BOTAN_HOUSE_ECC_CURVE_NAME;
#endif

   return std::string();
   }

OID lookup(const std::string& name)
   {
   if(name == "AES-128/CBC") return OID("2.16.840.1.101.3.4.1.2");
   if(name == "AES-128/CCM") return OID("2.16.840.1.101.3.4.1.7");
   if(name == "AES-128/GCM") return OID("2.16.840.1.101.3.4.1.6");
   if(name == "AES-128/OCB") return OID("1.3.6.1.4.1.25258.3.2.1");
   if(name == "AES-192/CBC") return OID("2.16.840.1.101.3.4.1.22");
   if(name == "AES-192/CCM") return OID("2.16.840.1.101.3.4.1.27");
   if(name == "AES-192/GCM") return OID("2.16.840.1.101.3.4.1.26");
   if(name == "AES-192/OCB") return OID("1.3.6.1.4.1.25258.3.2.2");
   if(name == "AES-256/CBC") return OID("2.16.840.1.101.3.4.1.42");
   if(name == "AES-256/CCM") return OID("2.16.840.1.101.3.4.1.47");
   if(name == "AES-256/GCM") return OID("2.16.840.1.101.3.4.1.46");
   if(name == "AES-256/OCB") return OID("1.3.6.1.4.1.25258.3.2.3");
   if(name == "CAST-128/CBC") return OID("1.2.840.113533.7.66.10");
   if(name == "Compression.Zlib") return OID("1.2.840.113549.1.9.16.3.8");
   if(name == "Curve25519") return OID("1.3.101.110");
   if(name == "DES/CBC") return OID("1.3.14.3.2.7");
   if(name == "DH") return OID("1.2.840.10046.2.1");
   if(name == "DSA") return OID("1.2.840.10040.4.1");
   if(name == "DSA/EMSA1(SHA-160)") return OID("1.2.840.10040.4.3");
   if(name == "DSA/EMSA1(SHA-224)") return OID("2.16.840.1.101.3.4.3.1");
   if(name == "DSA/EMSA1(SHA-256)") return OID("2.16.840.1.101.3.4.3.2");
   if(name == "DSA/EMSA1(SHA-3(224))") return OID("2.16.840.1.101.3.4.3.5");
   if(name == "DSA/EMSA1(SHA-3(256))") return OID("2.16.840.1.101.3.4.3.6");
   if(name == "DSA/EMSA1(SHA-3(384))") return OID("2.16.840.1.101.3.4.3.7");
   if(name == "DSA/EMSA1(SHA-3(512))") return OID("2.16.840.1.101.3.4.3.8");
   if(name == "DSA/EMSA1(SHA-384)") return OID("2.16.840.1.101.3.4.3.3");
   if(name == "DSA/EMSA1(SHA-512)") return OID("2.16.840.1.101.3.4.3.4");
   if(name == "ECDH") return OID("1.3.132.1.12");
   if(name == "ECDSA") return OID("1.2.840.10045.2.1");
   if(name == "ECDSA/EMSA1(SHA-160)") return OID("1.2.840.10045.4.1");
   if(name == "ECDSA/EMSA1(SHA-224)") return OID("1.2.840.10045.4.3.1");
   if(name == "ECDSA/EMSA1(SHA-256)") return OID("1.2.840.10045.4.3.2");
   if(name == "ECDSA/EMSA1(SHA-3(224))") return OID("2.16.840.1.101.3.4.3.9");
   if(name == "ECDSA/EMSA1(SHA-3(256))") return OID("2.16.840.1.101.3.4.3.10");
   if(name == "ECDSA/EMSA1(SHA-3(384))") return OID("2.16.840.1.101.3.4.3.11");
   if(name == "ECDSA/EMSA1(SHA-3(512))") return OID("2.16.840.1.101.3.4.3.12");
   if(name == "ECDSA/EMSA1(SHA-384)") return OID("1.2.840.10045.4.3.3");
   if(name == "ECDSA/EMSA1(SHA-512)") return OID("1.2.840.10045.4.3.4");
   if(name == "ECGDSA") return OID("1.3.36.3.3.2.5.2.1");
   if(name == "ECGDSA/EMSA1(RIPEMD-160)") return OID("1.3.36.3.3.2.5.4.1");
   if(name == "ECGDSA/EMSA1(SHA-160)") return OID("1.3.36.3.3.2.5.4.2");
   if(name == "ECGDSA/EMSA1(SHA-224)") return OID("1.3.36.3.3.2.5.4.3");
   if(name == "ECGDSA/EMSA1(SHA-256)") return OID("1.3.36.3.3.2.5.4.4");
   if(name == "ECGDSA/EMSA1(SHA-384)") return OID("1.3.36.3.3.2.5.4.5");
   if(name == "ECGDSA/EMSA1(SHA-512)") return OID("1.3.36.3.3.2.5.4.6");
   if(name == "ECKCDSA") return OID("1.0.14888.3.0.5");
   if(name == "ECKCDSA/EMSA1(SHA-1)") return OID("1.2.410.200004.1.100.4.3");
   if(name == "ECKCDSA/EMSA1(SHA-224)") return OID("1.2.410.200004.1.100.4.4");
   if(name == "ECKCDSA/EMSA1(SHA-256)") return OID("1.2.410.200004.1.100.4.5");
   if(name == "Ed25519") return OID("1.3.101.112");
   if(name == "ElGamal") return OID("1.3.6.1.4.1.3029.1.2.1");
   if(name == "GOST-34.10") return OID("1.2.643.2.2.19");
   if(name == "GOST-34.10/EMSA1(GOST-R-34.11-94)") return OID("1.2.643.2.2.3");
   if(name == "GOST-34.10/EMSA1(SHA-256)") return OID("1.3.6.1.4.1.25258.1.6.1");
   if(name == "HMAC(SHA-160)") return OID("1.2.840.113549.2.7");
   if(name == "HMAC(SHA-224)") return OID("1.2.840.113549.2.8");
   if(name == "HMAC(SHA-256)") return OID("1.2.840.113549.2.9");
   if(name == "HMAC(SHA-384)") return OID("1.2.840.113549.2.10");
   if(name == "HMAC(SHA-512)") return OID("1.2.840.113549.2.11");
   if(name == "KeyWrap.AES-128") return OID("2.16.840.1.101.3.4.1.5");
   if(name == "KeyWrap.AES-192") return OID("2.16.840.1.101.3.4.1.25");
   if(name == "KeyWrap.AES-256") return OID("2.16.840.1.101.3.4.1.45");
   if(name == "KeyWrap.CAST-128") return OID("1.2.840.113533.7.66.15");
   if(name == "KeyWrap.RC2") return OID("1.2.840.113549.1.9.16.3.7");
   if(name == "KeyWrap.TripleDES") return OID("1.2.840.113549.1.9.16.3.6");
   if(name == "MD5") return OID("1.2.840.113549.2.5");
   if(name == "McEliece") return OID("1.3.6.1.4.1.25258.1.3");
   if(name == "Microsoft SmartcardLogon") return OID("1.3.6.1.4.1.311.20.2.2");
   if(name == "PBE-PKCS5v20") return OID("1.2.840.113549.1.5.13");
   if(name == "PKCS5.PBKDF2") return OID("1.2.840.113549.1.5.12");
   if(name == "PKCS9.ChallengePassword") return OID("1.2.840.113549.1.9.7");
   if(name == "PKCS9.ContentType") return OID("1.2.840.113549.1.9.3");
   if(name == "PKCS9.EmailAddress") return OID("1.2.840.113549.1.9.1");
   if(name == "PKCS9.ExtensionRequest") return OID("1.2.840.113549.1.9.14");
   if(name == "PKCS9.MessageDigest") return OID("1.2.840.113549.1.9.4");
   if(name == "PKCS9.UnstructuredName") return OID("1.2.840.113549.1.9.2");
   if(name == "PKIX.AuthorityInformationAccess") return OID("1.3.6.1.5.5.7.1.1");
   if(name == "PKIX.ClientAuth") return OID("1.3.6.1.5.5.7.3.2");
   if(name == "PKIX.CodeSigning") return OID("1.3.6.1.5.5.7.3.3");
   if(name == "PKIX.EmailProtection") return OID("1.3.6.1.5.5.7.3.4");
   if(name == "PKIX.IPsecEndSystem") return OID("1.3.6.1.5.5.7.3.5");
   if(name == "PKIX.IPsecTunnel") return OID("1.3.6.1.5.5.7.3.6");
   if(name == "PKIX.IPsecUser") return OID("1.3.6.1.5.5.7.3.7");
   if(name == "PKIX.OCSP") return OID("1.3.6.1.5.5.7.48.1");
   if(name == "PKIX.OCSP.BasicResponse") return OID("1.3.6.1.5.5.7.48.1.1");
   if(name == "PKIX.OCSPSigning") return OID("1.3.6.1.5.5.7.3.9");
   if(name == "PKIX.ServerAuth") return OID("1.3.6.1.5.5.7.3.1");
   if(name == "PKIX.TimeStamping") return OID("1.3.6.1.5.5.7.3.8");
   if(name == "PKIX.XMPPAddr") return OID("1.3.6.1.5.5.7.8.5");
   if(name == "RC2/CBC") return OID("1.2.840.113549.3.2");
   if(name == "RSA") return OID("1.2.840.113549.1.1.1");
   if(name == "RSA/EMSA3(MD5)") return OID("1.2.840.113549.1.1.4");
   if(name == "RSA/EMSA3(RIPEMD-160)") return OID("1.3.36.3.3.1.2");
   if(name == "RSA/EMSA3(SHA-160)") return OID("1.2.840.113549.1.1.5");
   if(name == "RSA/EMSA3(SHA-256)") return OID("1.2.840.113549.1.1.11");
   if(name == "RSA/EMSA3(SHA-3(224))") return OID("2.16.840.1.101.3.4.3.13");
   if(name == "RSA/EMSA3(SHA-3(256))") return OID("2.16.840.1.101.3.4.3.14");
   if(name == "RSA/EMSA3(SHA-3(384))") return OID("2.16.840.1.101.3.4.3.15");
   if(name == "RSA/EMSA3(SHA-3(512))") return OID("2.16.840.1.101.3.4.3.16");
   if(name == "RSA/EMSA3(SHA-384)") return OID("1.2.840.113549.1.1.12");
   if(name == "RSA/EMSA3(SHA-512)") return OID("1.2.840.113549.1.1.13");
   if(name == "RSA/EMSA3(SM3)") return OID("1.2.156.10197.1.504");
   if(name == "SEED/CBC") return OID("1.2.410.200004.1.4");
   if(name == "SHA-160") return OID("1.3.14.3.2.26");
   if(name == "SHA-224") return OID("2.16.840.1.101.3.4.2.4");
   if(name == "SHA-256") return OID("2.16.840.1.101.3.4.2.1");
   if(name == "SHA-3(224)") return OID("2.16.840.1.101.3.4.2.7");
   if(name == "SHA-3(256)") return OID("2.16.840.1.101.3.4.2.8");
   if(name == "SHA-3(384)") return OID("2.16.840.1.101.3.4.2.9");
   if(name == "SHA-3(512)") return OID("2.16.840.1.101.3.4.2.10");
   if(name == "SHA-384") return OID("2.16.840.1.101.3.4.2.2");
   if(name == "SHA-512") return OID("2.16.840.1.101.3.4.2.3");
   if(name == "SHA-512-256") return OID("2.16.840.1.101.3.4.2.6");
   if(name == "SHAKE-128") return OID("2.16.840.1.101.3.4.2.11");
   if(name == "SHAKE-256") return OID("2.16.840.1.101.3.4.2.12");
   if(name == "SM2_Enc") return OID("1.2.156.10197.1.301.3");
   if(name == "SM2_Kex") return OID("1.2.156.10197.1.301.2");
   if(name == "SM2_Sig") return OID("1.2.156.10197.1.301.1");
   if(name == "SM3") return OID("1.2.156.10197.1.401");
   if(name == "Serpent/CBC") return OID("1.3.6.1.4.1.25258.3.1");
   if(name == "Serpent/GCM") return OID("1.3.6.1.4.1.25258.3.101");
   if(name == "Serpent/OCB") return OID("1.3.6.1.4.1.25258.3.2.4");
   if(name == "Threefish-512/CBC") return OID("1.3.6.1.4.1.25258.3.2");
   if(name == "Tiger(24,3)") return OID("1.3.6.1.4.1.11591.12.2");
   if(name == "TripleDES/CBC") return OID("1.2.840.113549.3.7");
   if(name == "Twofish/CBC") return OID("1.3.6.1.4.1.25258.3.3");
   if(name == "Twofish/GCM") return OID("1.3.6.1.4.1.25258.3.102");
   if(name == "Twofish/OCB") return OID("1.3.6.1.4.1.25258.3.2.5");
   if(name == "X509v3.AnyPolicy") return OID("2.5.29.32.0");
   if(name == "X509v3.AuthorityKeyIdentifier") return OID("2.5.29.35");
   if(name == "X509v3.BasicConstraints") return OID("2.5.29.19");
   if(name == "X509v3.CRLDistributionPoints") return OID("2.5.29.31");
   if(name == "X509v3.CRLNumber") return OID("2.5.29.20");
   if(name == "X509v3.CertificatePolicies") return OID("2.5.29.32");
   if(name == "X509v3.ExtendedKeyUsage") return OID("2.5.29.37");
   if(name == "X509v3.HoldInstructionCode") return OID("2.5.29.23");
   if(name == "X509v3.InvalidityDate") return OID("2.5.29.24");
   if(name == "X509v3.IssuerAlternativeName") return OID("2.5.29.18");
   if(name == "X509v3.KeyUsage") return OID("2.5.29.15");
   if(name == "X509v3.NameConstraints") return OID("2.5.29.30");
   if(name == "X509v3.PolicyConstraints") return OID("2.5.29.36");
   if(name == "X509v3.ReasonCode") return OID("2.5.29.21");
   if(name == "X509v3.SubjectAlternativeName") return OID("2.5.29.17");
   if(name == "X509v3.SubjectKeyIdentifier") return OID("2.5.29.14");
   if(name == "X520.CommonName") return OID("2.5.4.3");
   if(name == "X520.Country") return OID("2.5.4.6");
   if(name == "X520.DNQualifier") return OID("2.5.4.46");
   if(name == "X520.GenerationalQualifier") return OID("2.5.4.44");
   if(name == "X520.GivenName") return OID("2.5.4.42");
   if(name == "X520.Initials") return OID("2.5.4.43");
   if(name == "X520.Locality") return OID("2.5.4.7");
   if(name == "X520.Organization") return OID("2.5.4.10");
   if(name == "X520.OrganizationalUnit") return OID("2.5.4.11");
   if(name == "X520.Pseudonym") return OID("2.5.4.65");
   if(name == "X520.SerialNumber") return OID("2.5.4.5");
   if(name == "X520.State") return OID("2.5.4.8");
   if(name == "X520.Surname") return OID("2.5.4.4");
   if(name == "X520.Title") return OID("2.5.4.12");
   if(name == "XMSS") return OID("1.3.6.1.4.1.25258.1.5");
   if(name == "brainpool160r1") return OID("1.3.36.3.3.2.8.1.1.1");
   if(name == "brainpool192r1") return OID("1.3.36.3.3.2.8.1.1.3");
   if(name == "brainpool224r1") return OID("1.3.36.3.3.2.8.1.1.5");
   if(name == "brainpool256r1") return OID("1.3.36.3.3.2.8.1.1.7");
   if(name == "brainpool320r1") return OID("1.3.36.3.3.2.8.1.1.9");
   if(name == "brainpool384r1") return OID("1.3.36.3.3.2.8.1.1.11");
   if(name == "brainpool512r1") return OID("1.3.36.3.3.2.8.1.1.13");
   if(name == "frp256v1") return OID("1.2.250.1.223.101.256.1");
   if(name == "gost_256A") return OID("1.2.643.2.2.35.1");
   if(name == "secp160k1") return OID("1.3.132.0.9");
   if(name == "secp160r1") return OID("1.3.132.0.8");
   if(name == "secp160r2") return OID("1.3.132.0.30");
   if(name == "secp192k1") return OID("1.3.132.0.31");
   if(name == "secp192r1") return OID("1.2.840.10045.3.1.1");
   if(name == "secp224k1") return OID("1.3.132.0.32");
   if(name == "secp224r1") return OID("1.3.132.0.33");
   if(name == "secp256k1") return OID("1.3.132.0.10");
   if(name == "secp256r1") return OID("1.2.840.10045.3.1.7");
   if(name == "secp384r1") return OID("1.3.132.0.34");
   if(name == "secp521r1") return OID("1.3.132.0.35");
   if(name == "x962_p192v2") return OID("1.2.840.10045.3.1.2");
   if(name == "x962_p192v3") return OID("1.2.840.10045.3.1.3");
   if(name == "x962_p239v1") return OID("1.2.840.10045.3.1.4");
   if(name == "x962_p239v2") return OID("1.2.840.10045.3.1.5");
   if(name == "x962_p239v3") return OID("1.2.840.10045.3.1.6");

#if defined(BOTAN_HOUSE_ECC_CURVE_NAME)
   if(name == BOTAN_HOUSE_ECC_CURVE_NAME) return OID(BOTAN_HOUSE_ECC_CURVE_OID);
#endif

   return OID();
   }

}

}

