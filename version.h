
#define BREGONIG_VERSION_MAJOR	2
#define BREGONIG_VERSION_MINOR	06
#define BREGONIG_VERSION_SUFFIX	""


#define TOSTR_(a)	#a
#define BREGONIG_VERSION_TOSTR_(a,b,c)	\
	TOSTR_(a) "." TOSTR_(b) c
#define BREGONIG_VERSION_STRING	\
	BREGONIG_VERSION_TOSTR_(BREGONIG_VERSION_MAJOR, BREGONIG_VERSION_MINOR, BREGONIG_VERSION_SUFFIX)

