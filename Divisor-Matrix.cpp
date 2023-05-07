#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;

struct Page {
	int id;
	string path;
	int counter;
	Page(int id, string path) {
		this->id = id;
		this->path = path;
		counter = 0;
	};
};

// This function can facilitate sorting
bool operator<(const Page & a, const Page & b) {
	return (a.id < b.id);
};

vector<Page> pages;

struct User {
	int id;
	vector<string> visits;
	User(int id) {
		this->id = id;
	};
	void add_visit(int page_id) {
		Page p(page_id, "");
		sort(pages.begin(), pages.end()); // Pages needed to be sorted b4 using lower bound
		vector<Page>::iterator iter = lower_bound(pages.begin(), pages.end(), p);
		if (iter->id == page_id)
			visits.push_back(iter->path);
	};
	int size() const {
		return visits.size();
	};
	void print_visits() {
		sort(visits.begin(), visits.end());
		vector<string>::iterator iter;
		for (iter = visits.begin(); iter != visits.end(); iter++) {
			cout << "- " << *iter << endl;
		}
	}
};

vector<User> users;

// Please implement the following function to facilitate the sorting of users
bool operator<(const User & a, const User & b) {
	int visit_a = a.size();
	int visit_b = b.size();
	if (visit_a == visit_b)
		return a.id < b.id;
	else
		return visit_a > visit_b;
};

// Please implement the following function
void add_page(const Page& p) {
	pages.push_back(p);
}

// Please implement the following function
bool cmp_page_count(const Page & a, const Page & b) {
	int counter_a = a.counter;
	int counter_b = b.counter;
	if (counter_a == counter_b)
		return a.path < b.path;
	return counter_a >counter_b;
}

// Please implement the following function
void print_pages(int number) {
	for (int i = 0; i<number; i++)
		cout << pages[i].counter << ":" << pages[i].path << endl;
}

// Please implement the following function
void add_user(User u) {
	users.push_back(u);
}

// Please implement the following function
void add_visit(int page_id) {
	users.back().add_visit(page_id);
}

// Please implement the following function
void print_users(int number) {
	for (int i = 0; i<number; i++){
		cout << users[i].size() << ":" << users[i].id << endl;
		users[i].print_visits();
	}
}

int main() {
	string type;
	while (cin >> type) {
		if (type == "USER") {
			int user_id;
			cin >> user_id;
			User u(user_id);
			add_user(u);
		}	else if (type == "PAGE") {
			int page_id;
			string page_path;
			cin >> page_id;
			cin >> page_path;
			Page p(page_id, page_path);
			add_page(p);
		}	else if (type == "VISIT") {
			int page_id;
			cin >> page_id;
			Page p(page_id, "");
			sort(pages.begin(), pages.end()); // Pages needed to be sorted b4 using lower bound
			vector<Page>::iterator iter = lower_bound(pages.begin(), pages.end(), p);
			if (iter->id == p.id) {
				iter->counter++;
			}
			add_visit(p.id);
		}
	}
	sort(pages.begin(), pages.end(), cmp_page_count);
	cout << "*** 5 most popular pages ***" << endl;
	print_pages(5);
	sort(pages.begin(), pages.end());
	sort(users.begin(), users.end());
	cout << "*** 5 most active users ***" << endl;
	print_users(5);
	return 0;
}
