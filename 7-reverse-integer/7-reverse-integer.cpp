class Solution {
public:
    int reverse(int x) {
       std::string str = std::to_string(x);
		if (str[0] == '-')
			std::reverse(str.begin() + 1, str.end());
		else
			std::reverse(str.begin(), str.end());
		try{
			return stoi(str);
		}
		catch (out_of_range ex){
			return 0;
		} 
    }
};