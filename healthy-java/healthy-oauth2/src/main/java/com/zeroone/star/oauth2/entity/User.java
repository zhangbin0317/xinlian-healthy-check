package com.zeroone.star.oauth2.entity;

import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableId;
import com.baomidou.mybatisplus.annotation.TableName;
import lombok.Getter;
import lombok.Setter;

import java.io.Serializable;

/**
 * <p>
 * 用户表
 * </p>
 *
 * @author 阿伟
 */
@Getter
@Setter
@TableName(value = "t_user")
public class User implements Serializable {

    private static final long serialVersionUID = 1L;

    /**
     * 用户编号
     */
    @TableId(value = "id", type = IdType.AUTO)
    private Long id;

    /**
     * 账户名
     */
    private String username;

    /**
     * 密码
     */
    private String password;


}
