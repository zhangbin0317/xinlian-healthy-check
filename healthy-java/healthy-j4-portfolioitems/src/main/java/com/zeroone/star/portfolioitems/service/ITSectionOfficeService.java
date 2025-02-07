package com.zeroone.star.portfolioitems.service;

import com.zeroone.star.portfolioitems.entity.TSectionOffice;
import com.baomidou.mybatisplus.extension.service.IService;
import com.zeroone.star.project.dto.PageDTO;
import com.zeroone.star.project.j4.vo.SectionNameListVO;

import java.util.List;

/**
 * <p>
 * 科室 服务类
 * </p>
 *
 * @author ;jiemo
 * @since 2024-01-29
 */
public interface ITSectionOfficeService extends IService<TSectionOffice> {

    /**
     * 获取科室名称
     * @return 查询结果
     */
    List<SectionNameListVO>  listSectionName();
}
