// Code generated by mockery v1.0.1. DO NOT EDIT.

package mocks

import mock "github.com/stretchr/testify/mock"

// ImmutableParentInfo is an autogenerated mock type for the ImmutableParentInfo type
type ImmutableParentInfo struct {
	mock.Mock
}

type ImmutableParentInfo_CurrentAttempt struct {
	*mock.Call
}

func (_m ImmutableParentInfo_CurrentAttempt) Return(_a0 uint32) *ImmutableParentInfo_CurrentAttempt {
	return &ImmutableParentInfo_CurrentAttempt{Call: _m.Call.Return(_a0)}
}

func (_m *ImmutableParentInfo) OnCurrentAttempt() *ImmutableParentInfo_CurrentAttempt {
	c_call := _m.On("CurrentAttempt")
	return &ImmutableParentInfo_CurrentAttempt{Call: c_call}
}

func (_m *ImmutableParentInfo) OnCurrentAttemptMatch(matchers ...interface{}) *ImmutableParentInfo_CurrentAttempt {
	c_call := _m.On("CurrentAttempt", matchers...)
	return &ImmutableParentInfo_CurrentAttempt{Call: c_call}
}

// CurrentAttempt provides a mock function with given fields:
func (_m *ImmutableParentInfo) CurrentAttempt() uint32 {
	ret := _m.Called()

	var r0 uint32
	if rf, ok := ret.Get(0).(func() uint32); ok {
		r0 = rf()
	} else {
		r0 = ret.Get(0).(uint32)
	}

	return r0
}

type ImmutableParentInfo_GetUniqueID struct {
	*mock.Call
}

func (_m ImmutableParentInfo_GetUniqueID) Return(_a0 string) *ImmutableParentInfo_GetUniqueID {
	return &ImmutableParentInfo_GetUniqueID{Call: _m.Call.Return(_a0)}
}

func (_m *ImmutableParentInfo) OnGetUniqueID() *ImmutableParentInfo_GetUniqueID {
	c_call := _m.On("GetUniqueID")
	return &ImmutableParentInfo_GetUniqueID{Call: c_call}
}

func (_m *ImmutableParentInfo) OnGetUniqueIDMatch(matchers ...interface{}) *ImmutableParentInfo_GetUniqueID {
	c_call := _m.On("GetUniqueID", matchers...)
	return &ImmutableParentInfo_GetUniqueID{Call: c_call}
}

// GetUniqueID provides a mock function with given fields:
func (_m *ImmutableParentInfo) GetUniqueID() string {
	ret := _m.Called()

	var r0 string
	if rf, ok := ret.Get(0).(func() string); ok {
		r0 = rf()
	} else {
		r0 = ret.Get(0).(string)
	}

	return r0
}

type ImmutableParentInfo_IsInDynamicChain struct {
	*mock.Call
}

func (_m ImmutableParentInfo_IsInDynamicChain) Return(_a0 bool) *ImmutableParentInfo_IsInDynamicChain {
	return &ImmutableParentInfo_IsInDynamicChain{Call: _m.Call.Return(_a0)}
}

func (_m *ImmutableParentInfo) OnIsInDynamicChain() *ImmutableParentInfo_IsInDynamicChain {
	c_call := _m.On("IsInDynamicChain")
	return &ImmutableParentInfo_IsInDynamicChain{Call: c_call}
}

func (_m *ImmutableParentInfo) OnIsInDynamicChainMatch(matchers ...interface{}) *ImmutableParentInfo_IsInDynamicChain {
	c_call := _m.On("IsInDynamicChain", matchers...)
	return &ImmutableParentInfo_IsInDynamicChain{Call: c_call}
}

// IsInDynamicChain provides a mock function with given fields:
func (_m *ImmutableParentInfo) IsInDynamicChain() bool {
	ret := _m.Called()

	var r0 bool
	if rf, ok := ret.Get(0).(func() bool); ok {
		r0 = rf()
	} else {
		r0 = ret.Get(0).(bool)
	}

	return r0
}
