#include <iostream>
#include <filesystem>
#include <fstream>
// including JsonCpp header file
#include <json/json.h>

using namespace std;

void loadPlugIn(string input)
{
	cout << "loading plugin: " << input << endl;
}

class foo
{
public:
	struct indent
	{
		int length{0};
		bool use_space{false};
	};

	static void setIndentLength(int indentLength )
	{
		s_indent.length = indentLength;
		cout << "indent length: " << s_indent.length << endl;

	}

	static int getCurrentIndentLength()
	{
		return s_indent.length;
	}

	static void setIndentUseSpace(bool intentUseSpace)
	{
		s_indent.use_space = intentUseSpace;
		cout << "indent use space: " << s_indent.use_space << endl;
	}

	static bool getCurrentIndentUseSpace()
	{
		return s_indent.use_space;
	}

	static string getCurrentEncoding()
	{
		return "UTF-8";
	}

	


	static indent s_indent;
};

foo::indent foo::s_indent;

int main() {


	cout << filesystem::current_path().string() << endl; // filesystem only C++ 20

	cout << "file exists: " << filesystem::exists("data.json") << endl;
	// read file
	ifstream file("data.json");
	// json reader
	Json::Reader reader;
	Json::Value root;   // 'root' will contain the root value after parsing.
	//std::cin >> root;
	reader.parse(file, root);
	 
	// You can also read into a particular sub-value.
	//std::cin >> root["subtree"];
	 
	// Get the value of the member of root named 'encoding',
	// and return 'UTF-8' if there is no such member.
	std::string encoding = root.get("encoding", "UTF-16" ).asString();
	 
	// Get the value of the member of root named 'plug-ins'; return a 'null' value if
	// there is no such member.
	const Json::Value plugins = root["plug-ins"];
	 
	// Iterate over the sequence elements.
	for ( int index = 0; index < plugins.size(); ++index )
	   loadPlugIn( plugins[index].asString() );
	 
	// Try other datatypes. Some are auto-convertible to others.
	foo::setIndentLength( root["indent"].get("length", 3).asInt() );
	foo::setIndentUseSpace( root["indent"].get("use_space", true).asBool() );
	 
	// Since Json::Value has an implicit constructor for all value types, it is not
	// necessary to explicitly construct the Json::Value object.
	root["encoding"] = foo::getCurrentEncoding();
	root["indent"]["length"] = foo::getCurrentIndentLength();
	root["indent"]["use_space"] = foo::getCurrentIndentUseSpace();
	 
	// If you like the defaults, you can insert directly into a stream.
	std::cout << root;
	// Of course, you can write to `std::ostringstream` if you prefer.
	 
	// If desired, remember to add a linefeed and flush.
	std::cout << std::endl;

	cin.ignore();
	return 0;
}