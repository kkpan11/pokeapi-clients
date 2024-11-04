# coding: utf-8

from typing import ClassVar, Dict, List, Tuple  # noqa: F401



class BaseMoveAilmentApi:
    subclasses: ClassVar[Tuple] = ()

    def __init_subclass__(cls, **kwargs):
        super().__init_subclass__(**kwargs)
        BaseMoveAilmentApi.subclasses = BaseMoveAilmentApi.subclasses + (cls,)
    async def move_ailment_list(
        self,
        limit: int,
        offset: int,
    ) -> str:
        ...


    async def move_ailment_read(
        self,
        id: int,
    ) -> str:
        ...
