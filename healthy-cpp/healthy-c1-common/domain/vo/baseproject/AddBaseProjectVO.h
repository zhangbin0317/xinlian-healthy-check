#pragma once

#ifndef _ADD_BASEPROJECTLISTVO_H_
#define _ADD_BASEPROJECTLISTVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/baseproject/AddBaseProjectDTO.h"
/*
 Copyright Zero One Star. All rights reserved.

 @Author: firmiana
 @Date: 2024/01/23
 @FileName: AddBaseProjectVO.h
 @version: 1.0

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

#include OATPP_CODEGEN_BEGIN(DTO)

class AddBaseProjectJsonVO : public JsonVO<AddBaseProjectDTO::Wrapper>
{
	DTO_INIT(AddBaseProjectJsonVO, JsonVO<AddBaseProjectDTO::Wrapper>);
};

class AddBaseProjectJsonPageVO : public JsonVO<AddBaseProjectPageDTO::Wrapper>
{
	DTO_INIT(AddBaseProjectJsonPageVO, JsonVO<AddBaseProjectPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_ADD_BASEPROJECTLISTVO_H_