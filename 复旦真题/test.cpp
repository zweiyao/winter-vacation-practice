        for(int i=0;i<speed.size();i++)
        {
            node[i]={speed[i],efficiency[i],i};
        }
        sort(node,node+n,cmp);
        //从大到小枚举eff，从前面eff中拿最大的
        long long sum=0;//速度和 
		for(int i=0;i<n;i++)
        {
            int e=node[i].eff;
            int s=node[i].speed;
if(ans<(sum+s)*e)
            	ans=(sum+s)*e;
			if(i<k-1){
				q.push(s);
				sum+=s;
        	}
			if(i>=k-1)
            {
            	//先计算结果在插入s
				 if(s>q.top())
				 {
				 	sum-=q.top();
				 	q.pop();
				 	sum+=s;
				 	q.push(s);
				 }
            }
            }
		return ans%(int)(1e9+7);
