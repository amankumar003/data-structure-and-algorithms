package com.kainskep.Services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

import com.kainskep.Entities.User;
import com.kainskep.dao.UserRepository;

@Component
public class UserService {
	
	@Autowired
	private UserRepository userRepository;
	
	//get all users data
	public List<User> getAllUsers(){
		List<User> list = (List<User>)this.userRepository.findAll();		
		return list;
	}
	
	//get single user data by id
	public User getUserById(int id) {
		User user = null;
		try{
			user=this.userRepository.findById(id);	
		}
		catch(Exception e) {
			e.printStackTrace();
		}
		return user;
	}
	
	// add a user data
	public User addUser(User user) {
		User result = userRepository.save(user);
		return result;
	}
	
	// delete user data
	public void deleteUser(int uid) {
		userRepository.deleteById(uid);
	}
	
	// update user data
	public void updateUser(User user, int userId) {
		user.setId(userId);
		userRepository.save(user);
	}
	

}
