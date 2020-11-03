#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, pom, time, duration, video;
    int durationAllVideos = 0;
    vector<int>videos;
    vector<int>posts;

    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> pom;
        videos.push_back(pom);
        durationAllVideos += pom;
    }

    if(durationAllVideos % k == 0)
    {
        time = durationAllVideos / k;
        duration = 0;
        video = 0;
        bool isEqual = true;
        for(int i = 0; i < n; i++)
        {
            duration += videos[i];
            video++;
            if(duration == time)
            {
                posts.push_back(video);
                video = 0;
                duration = 0;
            }
            if(duration > time)
            {
                isEqual = false;
                break;
            }
        }

        if(isEqual)
        {
            cout << "Yes" << endl;
            for(int j = 0; j < posts.size(); j++)
            {
                cout << posts[j] << " ";
            }
        }
        else 
            cout << "No";
            ;
    }
    else 
        cout << "No";

    return 0;
}