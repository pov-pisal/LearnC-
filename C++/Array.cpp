int x[5], sum=0, max, small;
    for(int i=0;i<5;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        sum+=x[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<"\t";
        if(x[i]>max)
            max=x[i];
        if(x[i]<small)
            small=x[i];
    }
    cout<<"\nSum="<<sum;
    cout<<"\nMax="<<max;
    cout<<"\nSmall="<<small;
