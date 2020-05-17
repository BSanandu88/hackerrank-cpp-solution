try{
	int x=Server::compute(A,B);
	cout<<x<<endl;
}catch(bad_alloc& e){
	cout<<"Not enough memory"<<'\n';
}catch(exception &e){
	cout<<"Exception: "<<e.what()<<'\n';
}catch(...){
	cout<<"Other Exception"<<'\n';
}
