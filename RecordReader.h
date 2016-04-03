#include <vector>
// RecordReader.h
typedef struct RECORD {
	char id[32];
	char data[4096];
} RECORD;

class RecordReader {
	public:
		static void openFile(char* path);
		static void closeFile();
		// Read record and return true if can read the record, otherwise return false
		static bool readRecord();
		// Read all records left and return the number of records read
		static int readAllRecords();
		// Return the number of all records read
		static int getNumberOfReadRecord();
		// Return arrayList of read read records
		static std::vector<RECORD*> getReadRecords();
};