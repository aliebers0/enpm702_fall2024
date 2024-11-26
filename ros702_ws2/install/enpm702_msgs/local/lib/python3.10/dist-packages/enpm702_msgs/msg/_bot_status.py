# generated from rosidl_generator_py/resource/_idl.py.em
# with input from enpm702_msgs:msg/BotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'velocities'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BotStatus(type):
    """Metaclass of message 'BotStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BURGER': 1,
        'WAFFLE': 2,
        'WAFFLE_PI': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('enpm702_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'enpm702_msgs.msg.BotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bot_status

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BURGER': cls.__constants['BURGER'],
            'WAFFLE': cls.__constants['WAFFLE'],
            'WAFFLE_PI': cls.__constants['WAFFLE_PI'],
        }

    @property
    def BURGER(self):
        """Message constant 'BURGER'."""
        return Metaclass_BotStatus.__constants['BURGER']

    @property
    def WAFFLE(self):
        """Message constant 'WAFFLE'."""
        return Metaclass_BotStatus.__constants['WAFFLE']

    @property
    def WAFFLE_PI(self):
        """Message constant 'WAFFLE_PI'."""
        return Metaclass_BotStatus.__constants['WAFFLE_PI']


class BotStatus(metaclass=Metaclass_BotStatus):
    """
    Message class 'BotStatus'.

    Constants:
      BURGER
      WAFFLE
      WAFFLE_PI
    """

    __slots__ = [
        '_model',
        '_pose',
        '_velocities',
    ]

    _fields_and_field_types = {
        'model': 'uint8',
        'pose': 'geometry_msgs/Pose2D',
        'velocities': 'double[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.model = kwargs.get('model', int())
        from geometry_msgs.msg import Pose2D
        self.pose = kwargs.get('pose', Pose2D())
        if 'velocities' not in kwargs:
            self.velocities = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.velocities = numpy.array(kwargs.get('velocities'), dtype=numpy.float64)
            assert self.velocities.shape == (2, )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.model != other.model:
            return False
        if self.pose != other.pose:
            return False
        if all(self.velocities != other.velocities):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'model' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'model' field must be an unsigned integer in [0, 255]"
        self._model = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'pose' field must be a sub message of type 'Pose2D'"
        self._pose = value

    @builtins.property
    def velocities(self):
        """Message field 'velocities'."""
        return self._velocities

    @velocities.setter
    def velocities(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'velocities' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'velocities' numpy.ndarray() must have a size of 2"
            self._velocities = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'velocities' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._velocities = numpy.array(value, dtype=numpy.float64)
