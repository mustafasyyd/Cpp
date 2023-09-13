#include <ostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct IStorage 
{ virtual void save(const IJournal* j, const string& filename) = 0; };

/// <summary>
/// fix the class for single Resposablity 
/// </summary>
struct PrintEntriessManager  : public IStorage {  //storage - soft copy - hard copy
	/// <summary>
	/// static function for call the save operation 
	/// </summary>
	/// <param name="j"></param>
	/// <param name="filename"></param>
	PrintEntriessManager () {}
	void save(const IJournal* j, const string& filename) override{
		ofstream ofs(filename);
		for (auto& s : j->m_entries)
			ofs << s << endl;
	}
	
	static void mSave(const IJournal* j, const string& filename) {
		ofstream ofs(filename);
		for (auto& s : j->m_entries)
			ofs << s << endl;
	}
	
};

//*******************************************************************

struct IJournal{
	string m_title;
	vector<string> m_entries;

	virtual void add(const string& entry) = 0;
	virtual void save(const string& filename) = 0;

};


struct Journal : public IJournal {
	/// <summary>
	/// The Private or Public members in C++
	///
	/// </summary>
	string m_title;
	vector<string> m_entries;
	explicit Journal(const string& title) : m_title (title) {}

	void add(const string& entry)  override 
	{	m_entries.push_back(entry);  }
	/// <summary>
	///  not single Responsablity
	///
	/// </summary>
	/// <param name="filename">The file name to save entries </param>
	void save(const string& filename) {
		ofstream ofs(filename);
		for (auto& s : m_entries)
			ofs << s.c_str() << endl;
	}
};

struct JournalSport : public IJournal {
	explicit JournalSport(const string& title) 
	{ m_title = title ; }

	void add(const string& entry) override
	{ m_entries.push_back(entry); }
	/// <summary>
	///  not single Responsablity
	/// </summary>
	/// <param name="filename">The file name to save entries </param>
	void save(const string& filename) override{
		ofstream ofs(filename);
		for (auto& s : m_entries)
			ofs << s.c_str() << endl;

	}
};
 

auto main(int  argc,char** argv)-> int
{
	Journal Alahram{ "Alahram" };
	JournalSport Alahly{ "AlAhly" };

	Alahram.add("There is was a visit for the prime minstar of Egypt to india");
	Alahly.add("Alahly wining the third place in the worl cup");

	PrintEntriessManager PEM;
	PEM.save(&Alahram, "AlahramXML");
	PEM.save(&Alahly,"Al-Ahly");

	return 1;
}

