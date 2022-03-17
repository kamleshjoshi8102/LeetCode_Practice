class Solution {
public:
    int id=0;
    map<string,string>database;
    string baseURL="http://tinyurl.com";
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string ne="";
        ne=baseURL+to_string(id);
        
        database[ne]=longUrl;
        
        id++;
        
        return ne;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return database[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));