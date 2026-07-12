class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        long long startVal =0;
        long long endVal =0;
        int startSec = (stoi)(startTime.substr(6,2));
        int startmin = (stoi)(startTime.substr(3,2));
        int startHour = (stoi)(startTime.substr(0,2));
        int endSec = (stoi)(endTime.substr(6,2));
        int endmin = (stoi)(endTime.substr(3,2));
        int endHour = (stoi)(endTime.substr(0,2));
        cout<<startHour<<" ";
        startVal = startSec + (startmin*60) + ((startHour*60)*60);
        endVal = endSec + (endmin*60) + (endHour*60*60);
        cout<<startVal <<" "<< endVal;
        return endVal - startVal;
    }
};