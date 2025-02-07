#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: DY
 @Date: 2022/10/25 14:23:49

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#ifndef _INFO_LIST_DAO_
#define _INFO_LIST_DAO_
#include "BaseDAO.h"
#include "../../domain/do/info-inspectionSave/InfoListDO.h"
#include "../../domain/query/info-inspectionSave/InfoQuery.h"

/**
 * 示例表数据库操作实现
 */
class InfoListDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const InfoQuery::Wrapper& query);
	// 分页查询数据
	list<InfoListDO> selectWithPage(const InfoQuery::Wrapper& query);
	// 通过姓名查询数据
	list<InfoListDO> selectByName(const string& name);
	// 插入数据
	uint64_t insert(const InfoListDO& iObj);
	// 修改数据
	int update(const InfoListDO& uObj);
	// 通过ID删除数据
	int deleteById(uint64_t id);
};
#endif // !_SAMPLE_DAO_
