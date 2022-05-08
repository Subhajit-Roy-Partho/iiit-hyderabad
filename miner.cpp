#include <iostream>
#include <experimental/filesystem>
using namespace std;
namespace fs = experimental::filesystem;


int main(){
	cout<<"It is working"<<endl;\
	fs::path pathToShow("/root/Github/iiit-hyderabad");
	cout << "exists() = " << fs::exists(pathToShow) << "\n"
	     << "root_name() = " << pathToShow.root_name() << "\n"
	     << "root_path() = " << pathToShow.root_path() << "\n"
	     << "relative_path() = " << pathToShow.relative_path() << "\n"
	     << "parent_path() = " << pathToShow.parent_path() << "\n"
	     << "filename() = " << pathToShow.filename() << "\n"
	     << "stem() = " << pathToShow.stem() << "\n"
	     << "extension() = " << pathToShow.extension() << "\n";
	
}
